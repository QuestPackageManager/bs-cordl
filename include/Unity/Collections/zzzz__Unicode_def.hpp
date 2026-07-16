#pragma once
// IWYU pragma private; include "Unity/Collections/Unicode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Unicode)
namespace System {
class Object;
}
namespace Unity::Collections {
struct ConversionError;
}
namespace Unity::Collections {
struct Unicode_Rune;
}
// Forward declare root types
namespace Unity::Collections {
struct Unicode;
}
namespace Unity::Collections {
struct Unicode_Rune;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Unicode);
MARK_VAL_T(::Unity::Collections::Unicode_Rune);
DEFINE_IL2CPP_CLASS(::Unity::Collections::Unicode, "Unity.Collections", "Unicode");
DEFINE_IL2CPP_CLASS(::Unity::Collections::Unicode_Rune, "Unity.Collections", "Unicode/Rune");
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Unicode/Rune
struct CORDL_TYPE Unicode_Rune {
public:
  // Declarations
  /// @brief Method Equals, addr 0x64c3714, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x64c3790, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAscii, addr 0x64c37c8, size 0x10, virtual false, abstract: false, final false
  inline bool IsAscii();

  /// @brief Method IsDigit, addr 0x64c37b4, size 0x14, virtual false, abstract: false, final false
  inline bool IsDigit();

  /// @brief Method IsDigit, addr 0x64c37a4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsDigit(::Unity::Collections::Unicode_Rune r);

  /// @brief Method IsLatin1, addr 0x64c37d8, size 0x10, virtual false, abstract: false, final false
  inline bool IsLatin1();

  /// @brief Method IsWhiteSpace, addr 0x64c37e8, size 0x90, virtual false, abstract: false, final false
  inline bool IsWhiteSpace();

  /// @brief Method LengthInUtf8Bytes, addr 0x64c38ac, size 0x44, virtual false, abstract: false, final false
  inline int32_t LengthInUtf8Bytes();

  /// @brief Method ToLowerAscii, addr 0x64c3878, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::Unicode_Rune ToLowerAscii();

  /// @brief Method ToUpperAscii, addr 0x64c3890, size 0x1c, virtual false, abstract: false, final false
  inline ::Unity::Collections::Unicode_Rune ToUpperAscii();

  /// @brief Method .ctor, addr 0x64c36f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t codepoint);

  /// @brief Method op_Equality, addr 0x64c3708, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Collections::Unicode_Rune lhs, ::Unity::Collections::Unicode_Rune rhs);

  /// @brief Method op_Implicit, addr 0x64c3700, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::Unicode_Rune op_Implicit___Unity__Collections__Unicode_Rune(char16_t codepoint);

  /// @brief Method op_Inequality, addr 0x64c3798, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Collections::Unicode_Rune lhs, ::Unity::Collections::Unicode_Rune rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Unicode_Rune();

  // Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Unicode_Rune(int32_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15697 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  int32_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::Unicode_Rune, value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::Unicode_Rune) == 0x4, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.Unicode
#pragma pack(push, 0)
struct CORDL_TYPE Unicode {
public:
  // Declarations
  using Rune = ::Unity::Collections::Unicode_Rune;

  /// @brief Method CountRunes, addr 0x64c36a8, size 0x50, virtual false, abstract: false, final false
  static inline int32_t CountRunes(uint8_t* utf8Buffer, int32_t utf8Length, int32_t maxRunes);

  /// @brief Method FindUtf8CharStartInReverse, addr 0x64c31cc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t FindUtf8CharStartInReverse(uint8_t* ptr, ::by_ref<int32_t> index);

  /// @brief Method IsLeadingSurrogate, addr 0x64c326c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsLeadingSurrogate(char16_t c);

  /// @brief Method IsTrailingSurrogate, addr 0x64c327c, size 0x10, virtual false, abstract: false, final false
  static inline bool IsTrailingSurrogate(char16_t c);

  /// @brief Method IsValidCodePoint, addr 0x64c31a0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidCodePoint(int32_t codepoint);

  /// @brief Method NotTrailer, addr 0x64c31ac, size 0x10, virtual false, abstract: false, final false
  static inline bool NotTrailer(uint8_t b);

  /// @brief Method UcsToUcs, addr 0x64c3314, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError UcsToUcs(::by_ref<::Unity::Collections::Unicode_Rune> rune, ::Unity::Collections::Unicode_Rune* buffer, ::by_ref<int32_t> index,
                                                               int32_t capacity);

  /// @brief Method UcsToUtf16, addr 0x64c3454, size 0x7c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError UcsToUtf16(char16_t* buffer, ::by_ref<int32_t> index, int32_t capacity, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method UcsToUtf8, addr 0x64c3354, size 0x100, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError UcsToUtf8(uint8_t* buffer, ::by_ref<int32_t> index, int32_t capacity, ::Unity::Collections::Unicode_Rune rune);

  /// @brief Method Utf16ToUcs, addr 0x64c328c, size 0x88, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError Utf16ToUcs(::by_ref<::Unity::Collections::Unicode_Rune> rune, char16_t* buffer, ::by_ref<int32_t> index, int32_t capacity);

  /// @brief Method Utf16ToUtf8, addr 0x64c34d0, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError Utf16ToUtf8(char16_t* utf16Buffer, int32_t utf16Length, uint8_t* utf8Buffer, ::by_ref<int32_t> utf8Length, int32_t utf8Capacity);

  /// @brief Method Utf8ToUcs, addr 0x64c0590, size 0x184, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError Utf8ToUcs(::by_ref<::Unity::Collections::Unicode_Rune> rune, uint8_t* buffer, ::by_ref<int32_t> index, int32_t capacity);

  /// @brief Method Utf8ToUcsReverse, addr 0x64c3204, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError Utf8ToUcsReverse(::by_ref<::Unity::Collections::Unicode_Rune> rune, uint8_t* buffer, ::by_ref<int32_t> index, int32_t capacity);

  /// @brief Method Utf8ToUtf16, addr 0x64c3624, size 0x84, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError Utf8ToUtf16(uint8_t* utf8Buffer, int32_t utf8Length, char16_t* utf16Buffer, ::by_ref<int32_t> utf16Length, int32_t utf16Capacity);

  /// @brief Method Utf8ToUtf8, addr 0x64c3554, size 0xd0, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ConversionError Utf8ToUtf8(uint8_t* srcBuffer, int32_t srcLength, uint8_t* destBuffer, ::by_ref<int32_t> destLength, int32_t destCapacity);

  /// @brief Method get_BadRune, addr 0x64c31c4, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::Unicode_Rune get_BadRune();

  /// @brief Method get_ReplacementCharacter, addr 0x64c31bc, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::Unicode_Rune get_ReplacementCharacter();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Unicode();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15698 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field kMaximumValidCodePoint offset 0xffffffff size 0x4
  static constexpr int32_t kMaximumValidCodePoint{ static_cast<int32_t>(0x10ffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Collections::Unicode) == 0x1, "Size mismatch!");

} // namespace Unity::Collections
