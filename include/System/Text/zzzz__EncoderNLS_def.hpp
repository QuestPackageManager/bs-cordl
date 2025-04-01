#pragma once
// IWYU pragma private; include "System/Text/EncoderNLS.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderNLS)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Text {
class EncoderNLS;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderNLS);
// Dependencies System.Text.Encoder
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderNLS
class CORDL_TYPE EncoderNLS : public ::System::Text::Encoder {
public:
  // Declarations
  __declspec(property(get = get_Encoding)) ::System::Text::Encoding* Encoding;

  __declspec(property(get = get_HasState)) bool HasState;

  __declspec(property(get = get_MustFlush)) bool MustFlush;

  /// @brief Field _charLeftOver, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__charLeftOver, put = __cordl_internal_set__charLeftOver)) char16_t _charLeftOver;

  /// @brief Field _charsUsed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__charsUsed, put = __cordl_internal_set__charsUsed)) int32_t _charsUsed;

  /// @brief Field _encoding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding)) ::System::Text::Encoding* _encoding;

  /// @brief Field _mustFlush, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__mustFlush, put = __cordl_internal_set__mustFlush)) bool _mustFlush;

  /// @brief Field _throwOnOverflow, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__throwOnOverflow, put = __cordl_internal_set__throwOnOverflow)) bool _throwOnOverflow;

  /// @brief Method ClearMustFlush, addr 0x3c75874, size 0x8, virtual false, abstract: false, final false
  inline void ClearMustFlush();

  /// @brief Method Convert, addr 0x3c753ec, size 0x2b4, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, bool flush,
                      ::ByRef<int32_t> charsUsed, ::ByRef<int32_t> bytesUsed, ::ByRef<bool> completed);

  /// @brief Method Convert, addr 0x3c756a0, size 0x1b4, virtual true, abstract: false, final false
  inline void Convert(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush, ::ByRef<int32_t> charsUsed,
                      ::ByRef<int32_t> bytesUsed, ::ByRef<bool> completed);

  /// @brief Method GetByteCount, addr 0x3c74d98, size 0x1cc, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, bool flush);

  /// @brief Method GetByteCount, addr 0x3c74f64, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, bool flush);

  /// @brief Method GetBytes, addr 0x3c75054, size 0x280, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, bool flush);

  /// @brief Method GetBytes, addr 0x3c752d4, size 0x118, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush);

  static inline ::System::Text::EncoderNLS* New_ctor(::System::Text::Encoding* encoding);

  /// @brief Method Reset, addr 0x3c74d78, size 0x20, virtual true, abstract: false, final false
  inline void Reset();

  constexpr char16_t const& __cordl_internal_get__charLeftOver() const;

  constexpr char16_t& __cordl_internal_get__charLeftOver();

  constexpr int32_t const& __cordl_internal_get__charsUsed() const;

  constexpr int32_t& __cordl_internal_get__charsUsed();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr bool const& __cordl_internal_get__mustFlush() const;

  constexpr bool& __cordl_internal_get__mustFlush();

  constexpr bool const& __cordl_internal_get__throwOnOverflow() const;

  constexpr bool& __cordl_internal_get__throwOnOverflow();

  constexpr void __cordl_internal_set__charLeftOver(char16_t value);

  constexpr void __cordl_internal_set__charsUsed(int32_t value);

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set__mustFlush(bool value);

  constexpr void __cordl_internal_set__throwOnOverflow(bool value);

  /// @brief Method .ctor, addr 0x3c74d34, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method get_Encoding, addr 0x3c75854, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_HasState, addr 0x3c75864, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasState();

  /// @brief Method get_MustFlush, addr 0x3c7585c, size 0x8, virtual false, abstract: false, final false
  inline bool get_MustFlush();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderNLS();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderNLS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderNLS(EncoderNLS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderNLS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderNLS(EncoderNLS const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2849 };

  /// @brief Field _charLeftOver, offset: 0x20, size: 0x2, def value: None
  char16_t ____charLeftOver;

  /// @brief Field _encoding, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _mustFlush, offset: 0x30, size: 0x1, def value: None
  bool ____mustFlush;

  /// @brief Field _throwOnOverflow, offset: 0x31, size: 0x1, def value: None
  bool ____throwOnOverflow;

  /// @brief Field _charsUsed, offset: 0x34, size: 0x4, def value: None
  int32_t ____charsUsed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::EncoderNLS, ____charLeftOver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderNLS, ____encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderNLS, ____mustFlush) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderNLS, ____throwOnOverflow) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderNLS, ____charsUsed) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::EncoderNLS, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderNLS*, "System.Text", "EncoderNLS");
