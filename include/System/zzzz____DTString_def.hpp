#pragma once
// IWYU pragma private; include "System/__DTString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(__DTString)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
struct DTSubString;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct TokenType;
}
// Forward declare root types
namespace System {
struct __DTString;
}
// Write type traits
MARK_VAL_T(::System::__DTString);
// Dependencies System.ReadOnlySpan`1<T>
namespace System {
// Is value type: true
// CS Name: System.__DTString
struct CORDL_TYPE __DTString {
public:
  // Declarations
  __declspec(property(get = get_CompareInfo)) ::System::Globalization::CompareInfo* CompareInfo;

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field WhiteSpaceChecks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_WhiteSpaceChecks, put = setStaticF_WhiteSpaceChecks)) ::ArrayW<char16_t, ::Array<char16_t>*> WhiteSpaceChecks;

  /// @brief Method Advance, addr 0x3de252c, size 0xb8, virtual false, abstract: false, final false
  inline bool Advance(int32_t count);

  /// @brief Method AtEnd, addr 0x3de24ac, size 0x80, virtual false, abstract: false, final false
  inline bool AtEnd();

  /// @brief Method ConsumeSubString, addr 0x3de3e78, size 0xb0, virtual false, abstract: false, final false
  inline void ConsumeSubString(::System::DTSubString sub);

  /// @brief Method GetChar, addr 0x3de35cc, size 0x28, virtual false, abstract: false, final false
  inline char16_t GetChar();

  /// @brief Method GetDigit, addr 0x3de35f4, size 0x2c, virtual false, abstract: false, final false
  inline int32_t GetDigit();

  /// @brief Method GetNext, addr 0x3de2400, size 0xac, virtual false, abstract: false, final false
  inline bool GetNext();

  /// @brief Method GetNextDigit, addr 0x3de34f0, size 0xdc, virtual false, abstract: false, final false
  inline bool GetNextDigit();

  /// @brief Method GetRegularToken, addr 0x3de25e4, size 0x334, virtual false, abstract: false, final false
  inline void GetRegularToken(::ByRef<::System::TokenType> tokenType, ::ByRef<int32_t> tokenValue, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method GetRepeatCount, addr 0x3de3414, size 0xdc, virtual false, abstract: false, final false
  inline int32_t GetRepeatCount();

  /// @brief Method GetSeparatorToken, addr 0x3de2918, size 0x108, virtual false, abstract: false, final false
  inline ::System::TokenType GetSeparatorToken(::System::Globalization::DateTimeFormatInfo* dtfi, ::ByRef<int32_t> indexBeforeSeparator, ::ByRef<char16_t> charBeforeSeparator);

  /// @brief Method GetSubString, addr 0x3de3cf8, size 0x180, virtual false, abstract: false, final false
  inline ::System::DTSubString GetSubString();

  /// @brief Method Match, addr 0x3de3248, size 0xd4, virtual false, abstract: false, final false
  inline bool Match(char16_t ch);

  /// @brief Method Match, addr 0x3de30f8, size 0x150, virtual false, abstract: false, final false
  inline bool Match(::StringW str);

  /// @brief Method MatchLongestWords, addr 0x3de331c, size 0xf8, virtual false, abstract: false, final false
  inline int32_t MatchLongestWords(::ArrayW<::StringW, ::Array<::StringW>*> words, ::ByRef<int32_t> maxMatchStrLen);

  /// @brief Method MatchSpecifiedWord, addr 0x3de2b88, size 0x124, virtual false, abstract: false, final false
  inline bool MatchSpecifiedWord(::StringW target);

  /// @brief Method MatchSpecifiedWords, addr 0x3de2cac, size 0x44c, virtual false, abstract: false, final false
  inline bool MatchSpecifiedWords(::StringW target, bool checkWordBoundary, ::ByRef<int32_t> matchLength);

  /// @brief Method RemoveLeadingInQuoteSpaces, addr 0x3de3a68, size 0x290, virtual false, abstract: false, final false
  inline void RemoveLeadingInQuoteSpaces();

  /// @brief Method RemoveTrailingInQuoteSpaces, addr 0x3de383c, size 0x22c, virtual false, abstract: false, final false
  inline void RemoveTrailingInQuoteSpaces();

  /// @brief Method SkipWhiteSpaceCurrent, addr 0x3de2a20, size 0x168, virtual false, abstract: false, final false
  inline bool SkipWhiteSpaceCurrent();

  /// @brief Method SkipWhiteSpaces, addr 0x3de3620, size 0xf8, virtual false, abstract: false, final false
  inline void SkipWhiteSpaces();

  /// @brief Method TrimTail, addr 0x3de3718, size 0x124, virtual false, abstract: false, final false
  inline void TrimTail();

  /// @brief Method .ctor, addr 0x3de2334, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method .ctor, addr 0x3de22a8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> str, ::System::Globalization::DateTimeFormatInfo* dtfi, bool checkDigitToken);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_WhiteSpaceChecks();

  /// @brief Method get_CompareInfo, addr 0x3de23f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Globalization::CompareInfo* get_CompareInfo();

  /// @brief Method get_Length, addr 0x3de226c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  static inline void setStaticF_WhiteSpaceChecks(::ArrayW<char16_t, ::Array<char16_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DTString();

  // Ctor Parameters [CppParam { name: "Value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_current", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_info", ty: "::System::Globalization::CompareInfo*", modifiers: "", def_value: None }, CppParam
  // { name: "m_checkDigitToken", ty: "bool", modifiers: "", def_value: None }]
  constexpr __DTString(::System::ReadOnlySpan_1<char16_t> Value, int32_t Index, char16_t m_current, ::System::Globalization::CompareInfo* m_info, bool m_checkDigitToken) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2394 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Value, offset: 0x0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> Value;

  /// @brief Field Index, offset: 0x10, size: 0x4, def value: None
  int32_t Index;

  /// @brief Field m_current, offset: 0x14, size: 0x2, def value: None
  char16_t m_current;

  /// @brief Field m_info, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* m_info;

  /// @brief Field m_checkDigitToken, offset: 0x20, size: 0x1, def value: None
  bool m_checkDigitToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::__DTString, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, m_current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, m_info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__DTString, m_checkDigitToken) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::__DTString, 0x28>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__DTString, "System", "__DTString");
