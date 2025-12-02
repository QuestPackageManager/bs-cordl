#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct TimeSpanFormat_FormatLiterals;
}
namespace System::Globalization {
struct TimeSpanParse_ParseFailureKind;
}
namespace System::Globalization {
struct TimeSpanParse_StringParser;
}
namespace System::Globalization {
struct TimeSpanParse_TTT;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanRawInfo;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanResult;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanStandardStyles;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanToken;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanTokenizer;
}
namespace System::Globalization {
struct TimeSpanStyles;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
struct TimeSpanParse_ParseFailureKind;
}
namespace System::Globalization {
struct TimeSpanParse_TTT;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanStandardStyles;
}
namespace System::Globalization {
class TimeSpanParse;
}
namespace System::Globalization {
struct TimeSpanParse_StringParser;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanRawInfo;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanResult;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanToken;
}
namespace System::Globalization {
struct TimeSpanParse_TimeSpanTokenizer;
}
// Write type traits
MARK_VAL_T(::System::Globalization::TimeSpanParse_ParseFailureKind);
MARK_VAL_T(::System::Globalization::TimeSpanParse_TTT);
MARK_VAL_T(::System::Globalization::TimeSpanParse_TimeSpanStandardStyles);
MARK_REF_PTR_T(::System::Globalization::TimeSpanParse);
MARK_VAL_T(::System::Globalization::TimeSpanParse_StringParser);
MARK_VAL_T(::System::Globalization::TimeSpanParse_TimeSpanRawInfo);
MARK_VAL_T(::System::Globalization::TimeSpanParse_TimeSpanResult);
MARK_VAL_T(::System::Globalization::TimeSpanParse_TimeSpanToken);
MARK_VAL_T(::System::Globalization::TimeSpanParse_TimeSpanTokenizer);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/ParseFailureKind
struct CORDL_TYPE TimeSpanParse_ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TimeSpanParse_ParseFailureKind_Unwrapped
  enum struct __TimeSpanParse_ParseFailureKind_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_ArgumentNull = static_cast<uint8_t>(0x1u),
    __E_Format = static_cast<uint8_t>(0x2u),
    __E_FormatWithParameter = static_cast<uint8_t>(0x3u),
    __E_Overflow = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeSpanParse_ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<__TimeSpanParse_ParseFailureKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_ParseFailureKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_ParseFailureKind(uint8_t value__) noexcept;

  /// @brief Field ArgumentNull value: U8(1)
  static ::System::Globalization::TimeSpanParse_ParseFailureKind const ArgumentNull;

  /// @brief Field Format value: U8(2)
  static ::System::Globalization::TimeSpanParse_ParseFailureKind const Format;

  /// @brief Field FormatWithParameter value: U8(3)
  static ::System::Globalization::TimeSpanParse_ParseFailureKind const FormatWithParameter;

  /// @brief Field None value: U8(0)
  static ::System::Globalization::TimeSpanParse_ParseFailureKind const None;

  /// @brief Field Overflow value: U8(4)
  static ::System::Globalization::TimeSpanParse_ParseFailureKind const Overflow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_ParseFailureKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_ParseFailureKind, 0x1>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanStandardStyles
struct CORDL_TYPE TimeSpanParse_TimeSpanStandardStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TimeSpanParse_TimeSpanStandardStyles_Unwrapped
  enum struct __TimeSpanParse_TimeSpanStandardStyles_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_Invariant = static_cast<uint8_t>(0x1u),
    __E_Localized = static_cast<uint8_t>(0x2u),
    __E_RequireFull = static_cast<uint8_t>(0x4u),
    __E_Any = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeSpanParse_TimeSpanStandardStyles_Unwrapped() const noexcept {
    return static_cast<__TimeSpanParse_TimeSpanStandardStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_TimeSpanStandardStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_TimeSpanStandardStyles(uint8_t value__) noexcept;

  /// @brief Field Any value: U8(3)
  static ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles const Any;

  /// @brief Field Invariant value: U8(1)
  static ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles const Invariant;

  /// @brief Field Localized value: U8(2)
  static ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles const Localized;

  /// @brief Field None value: U8(0)
  static ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles const None;

  /// @brief Field RequireFull value: U8(4)
  static ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles const RequireFull;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, 0x1>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TTT
struct CORDL_TYPE TimeSpanParse_TTT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TimeSpanParse_TTT_Unwrapped
  enum struct __TimeSpanParse_TTT_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_End = static_cast<uint8_t>(0x1u),
    __E_Num = static_cast<uint8_t>(0x2u),
    __E_Sep = static_cast<uint8_t>(0x3u),
    __E_NumOverflow = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeSpanParse_TTT_Unwrapped() const noexcept {
    return static_cast<__TimeSpanParse_TTT_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_TTT();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_TTT(uint8_t value__) noexcept;

  /// @brief Field End value: U8(1)
  static ::System::Globalization::TimeSpanParse_TTT const End;

  /// @brief Field None value: U8(0)
  static ::System::Globalization::TimeSpanParse_TTT const None;

  /// @brief Field Num value: U8(2)
  static ::System::Globalization::TimeSpanParse_TTT const Num;

  /// @brief Field NumOverflow value: U8(4)
  static ::System::Globalization::TimeSpanParse_TTT const NumOverflow;

  /// @brief Field Sep value: U8(3)
  static ::System::Globalization::TimeSpanParse_TTT const Sep;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3612 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_TTT, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_TTT, 0x1>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Globalization.TimeSpanParse::TTT, System.ReadOnlySpan`1<T>
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanToken
struct CORDL_TYPE TimeSpanParse_TimeSpanToken {
public:
  // Declarations
  /// @brief Method IsInvalidFraction, addr 0x59a8690, size 0x5c, virtual false, abstract: false, final false
  inline bool IsInvalidFraction();

  /// @brief Method .ctor, addr 0x59ab514, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t number);

  /// @brief Method .ctor, addr 0x59adb70, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t number, int32_t leadingZeroes);

  /// @brief Method .ctor, addr 0x59add88, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::TimeSpanParse_TTT type);

  /// @brief Method .ctor, addr 0x59add98, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::TimeSpanParse_TTT type, int32_t number, int32_t leadingZeroes, ::System::ReadOnlySpan_1<char16_t> separator);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_TimeSpanToken();

  // Ctor Parameters [CppParam { name: "_ttt", ty: "::System::Globalization::TimeSpanParse_TTT", modifiers: "", def_value: None }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_TimeSpanToken(::System::Globalization::TimeSpanParse_TTT _ttt, int32_t _num, int32_t _zeroes, ::System::ReadOnlySpan_1<char16_t> _sep) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _ttt, offset: 0x0, size: 0x1, def value: None
  ::System::Globalization::TimeSpanParse_TTT _ttt;

  /// @brief Field _num, offset: 0x4, size: 0x4, def value: None
  int32_t _num;

  /// @brief Field _zeroes, offset: 0x8, size: 0x4, def value: None
  int32_t _zeroes;

  /// @brief Field _sep, offset: 0x10, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _sep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanToken, _ttt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanToken, _num) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanToken, _zeroes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanToken, _sep) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_TimeSpanToken, 0x20>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.ReadOnlySpan`1<T>
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct CORDL_TYPE TimeSpanParse_TimeSpanTokenizer {
public:
  // Declarations
  __declspec(property(get = get_EOL)) bool EOL;

  __declspec(property(get = get_NextChar)) char16_t NextChar;

  /// @brief Method BackOne, addr 0x59adb84, size 0x14, virtual false, abstract: false, final false
  inline void BackOne();

  /// @brief Method GetNextToken, addr 0x59a8be0, size 0x254, virtual false, abstract: false, final false
  inline ::System::Globalization::TimeSpanParse_TimeSpanToken GetNextToken();

  /// @brief Method .ctor, addr 0x59a8b80, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> input);

  /// @brief Method .ctor, addr 0x59ad934, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> input, int32_t startPosition);

  /// @brief Method get_EOL, addr 0x59adb1c, size 0x54, virtual false, abstract: false, final false
  inline bool get_EOL();

  /// @brief Method get_NextChar, addr 0x59adab4, size 0x68, virtual false, abstract: false, final false
  inline char16_t get_NextChar();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_TimeSpanTokenizer();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t> _value, int32_t _pos) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3614 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _value, offset: 0x0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _value;

  /// @brief Field _pos, offset: 0x10, size: 0x4, def value: None
  int32_t _pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanTokenizer, _value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanTokenizer, _pos) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_TimeSpanTokenizer, 0x18>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Globalization.TimeSpanFormat::FormatLiterals, System.Globalization.TimeSpanParse::TTT, System.Globalization.TimeSpanParse::TimeSpanToken, System.ReadOnlySpan`1<T>
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct CORDL_TYPE TimeSpanParse_TimeSpanRawInfo {
public:
  // Declarations
  __declspec(property(get = get_NegativeInvariant)) ::System::Globalization::TimeSpanFormat_FormatLiterals NegativeInvariant;

  __declspec(property(get = get_NegativeLocalized)) ::System::Globalization::TimeSpanFormat_FormatLiterals NegativeLocalized;

  __declspec(property(get = get_PositiveInvariant)) ::System::Globalization::TimeSpanFormat_FormatLiterals PositiveInvariant;

  __declspec(property(get = get_PositiveLocalized)) ::System::Globalization::TimeSpanFormat_FormatLiterals PositiveLocalized;

  /// @brief Method AddNum, addr 0x59adfa4, size 0xf0, virtual false, abstract: false, final false
  inline bool AddNum(::System::Globalization::TimeSpanParse_TimeSpanToken num, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method AddSep, addr 0x59ade84, size 0x120, virtual false, abstract: false, final false
  inline bool AddSep(::System::ReadOnlySpan_1<char16_t> sep, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method FullAppCompatMatch, addr 0x59abd18, size 0x3f0, virtual false, abstract: false, final false
  inline bool FullAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullDHMMatch, addr 0x59ac4d8, size 0x3d0, virtual false, abstract: false, final false
  inline bool FullDHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullDHMSMatch, addr 0x59ab920, size 0x3f8, virtual false, abstract: false, final false
  inline bool FullDHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullDMatch, addr 0x59acf94, size 0x26c, virtual false, abstract: false, final false
  inline bool FullDMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullHMMatch, addr 0x59acc70, size 0x324, virtual false, abstract: false, final false
  inline bool FullHMMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullHMSFMatch, addr 0x59ab528, size 0x3f8, virtual false, abstract: false, final false
  inline bool FullHMSFMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullHMSMatch, addr 0x59ac108, size 0x3d0, virtual false, abstract: false, final false
  inline bool FullHMSMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method FullMatch, addr 0x59aaf80, size 0x428, virtual false, abstract: false, final false
  inline bool FullMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method Init, addr 0x59a8b8c, size 0x54, virtual false, abstract: false, final false
  inline void Init(::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method PartialAppCompatMatch, addr 0x59ac8a8, size 0x3c8, virtual false, abstract: false, final false
  inline bool PartialAppCompatMatch(::System::Globalization::TimeSpanFormat_FormatLiterals pattern);

  /// @brief Method ProcessToken, addr 0x59a8e34, size 0x120, virtual false, abstract: false, final false
  inline bool ProcessToken(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanToken> tok, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method get_NegativeInvariant, addr 0x59ade14, size 0x70, virtual false, abstract: false, final false
  inline ::System::Globalization::TimeSpanFormat_FormatLiterals get_NegativeInvariant();

  /// @brief Method get_NegativeLocalized, addr 0x59ab45c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Globalization::TimeSpanFormat_FormatLiterals get_NegativeLocalized();

  /// @brief Method get_PositiveInvariant, addr 0x59adda8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Globalization::TimeSpanFormat_FormatLiterals get_PositiveInvariant();

  /// @brief Method get_PositiveLocalized, addr 0x59ab3a8, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Globalization::TimeSpanFormat_FormatLiterals get_PositiveLocalized();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_TimeSpanRawInfo();

  // Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::System::Globalization::TimeSpanParse_TTT", modifiers: "", def_value: None }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_posLoc", ty: "::System::Globalization::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_negLoc", ty:
  // "::System::Globalization::TimeSpanFormat_FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_negLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_fullNegPattern", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "_numbers0", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None }, CppParam { name:
  // "_numbers1", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers2", ty:
  // "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers3", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "",
  // def_value: None }, CppParam { name: "_numbers4", ty: "::System::Globalization::TimeSpanParse_TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_literals0", ty:
  // "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name:
  // "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None
  // }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals5", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers:
  // "", def_value: None }]
  constexpr TimeSpanParse_TimeSpanRawInfo(::System::Globalization::TimeSpanParse_TTT _lastSeenTTT, int32_t _tokenCount, int32_t _sepCount, int32_t _numCount,
                                          ::System::Globalization::TimeSpanFormat_FormatLiterals _posLoc, ::System::Globalization::TimeSpanFormat_FormatLiterals _negLoc, bool _posLocInit,
                                          bool _negLocInit, ::StringW _fullPosPattern, ::StringW _fullNegPattern, ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers0,
                                          ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers1, ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers2,
                                          ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers3, ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers4,
                                          ::System::ReadOnlySpan_1<char16_t> _literals0, ::System::ReadOnlySpan_1<char16_t> _literals1, ::System::ReadOnlySpan_1<char16_t> _literals2,
                                          ::System::ReadOnlySpan_1<char16_t> _literals3, ::System::ReadOnlySpan_1<char16_t> _literals4, ::System::ReadOnlySpan_1<char16_t> _literals5) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x178 };

  /// @brief Field _lastSeenTTT, offset: 0x0, size: 0x1, def value: None
  ::System::Globalization::TimeSpanParse_TTT _lastSeenTTT;

  /// @brief Field _tokenCount, offset: 0x4, size: 0x4, def value: None
  int32_t _tokenCount;

  /// @brief Field _sepCount, offset: 0x8, size: 0x4, def value: None
  int32_t _sepCount;

  /// @brief Field _numCount, offset: 0xc, size: 0x4, def value: None
  int32_t _numCount;

  /// @brief Field _posLoc, offset: 0x10, size: 0x28, def value: None
  ::System::Globalization::TimeSpanFormat_FormatLiterals _posLoc;

  /// @brief Field _negLoc, offset: 0x38, size: 0x28, def value: None
  ::System::Globalization::TimeSpanFormat_FormatLiterals _negLoc;

  /// @brief Field _posLocInit, offset: 0x60, size: 0x1, def value: None
  bool _posLocInit;

  /// @brief Field _negLocInit, offset: 0x61, size: 0x1, def value: None
  bool _negLocInit;

  /// @brief Field _fullPosPattern, offset: 0x68, size: 0x8, def value: None
  ::StringW _fullPosPattern;

  /// @brief Field _fullNegPattern, offset: 0x70, size: 0x8, def value: None
  ::StringW _fullNegPattern;

  /// @brief Field _numbers0, offset: 0x78, size: 0x20, def value: None
  ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers0;

  /// @brief Field _numbers1, offset: 0x98, size: 0x20, def value: None
  ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers1;

  /// @brief Field _numbers2, offset: 0xb8, size: 0x20, def value: None
  ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers2;

  /// @brief Field _numbers3, offset: 0xd8, size: 0x20, def value: None
  ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers3;

  /// @brief Field _numbers4, offset: 0xf8, size: 0x20, def value: None
  ::System::Globalization::TimeSpanParse_TimeSpanToken _numbers4;

  /// @brief Field _literals0, offset: 0x118, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _literals0;

  /// @brief Field _literals1, offset: 0x128, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _literals1;

  /// @brief Field _literals2, offset: 0x138, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _literals2;

  /// @brief Field _literals3, offset: 0x148, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _literals3;

  /// @brief Field _literals4, offset: 0x158, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _literals4;

  /// @brief Field _literals5, offset: 0x168, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _literals5;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _lastSeenTTT) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _tokenCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _sepCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _numCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _posLoc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _negLoc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _posLocInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _negLocInit) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _fullPosPattern) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _fullNegPattern) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _numbers0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _numbers1) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _numbers2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _numbers3) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _numbers4) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _literals0) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _literals1) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _literals2) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _literals3) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _literals4) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, _literals5) == 0x168, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_TimeSpanRawInfo, 0x178>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.TimeSpan
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TimeSpanResult
struct CORDL_TYPE TimeSpanParse_TimeSpanResult {
public:
  // Declarations
  /// @brief Method SetFailure, addr 0x59a8a64, size 0x11c, virtual false, abstract: false, final false
  inline bool SetFailure(::System::Globalization::TimeSpanParse_ParseFailureKind kind, ::StringW resourceKey, ::System::Object* messageArgument, ::StringW argumentName);

  /// @brief Method .ctor, addr 0x59a8720, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool throwOnFailure);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_TimeSpanResult();

  // Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_TimeSpanResult(::System::TimeSpan parsedTimeSpan, bool _throwOnFailure) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field parsedTimeSpan, offset: 0x0, size: 0x8, def value: None
  ::System::TimeSpan parsedTimeSpan;

  /// @brief Field _throwOnFailure, offset: 0x8, size: 0x1, def value: None
  bool _throwOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanResult, parsedTimeSpan) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_TimeSpanResult, _throwOnFailure) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_TimeSpanResult, 0x10>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.ReadOnlySpan`1<T>
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/StringParser
struct CORDL_TYPE TimeSpanParse_StringParser {
public:
  // Declarations
  /// @brief Method NextChar, addr 0x59ae094, size 0x48, virtual false, abstract: false, final false
  inline void NextChar();

  /// @brief Method NextNonDigit, addr 0x59ae0dc, size 0x64, virtual false, abstract: false, final false
  inline char16_t NextNonDigit();

  /// @brief Method ParseInt, addr 0x59ae32c, size 0x124, virtual false, abstract: false, final false
  inline bool ParseInt(int32_t max, ::ByRef<int32_t> i, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method ParseTime, addr 0x59ae170, size 0x1bc, virtual false, abstract: false, final false
  inline bool ParseTime(::ByRef<int64_t> time, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method SkipBlanks, addr 0x59ae140, size 0x30, virtual false, abstract: false, final false
  inline void SkipBlanks();

  /// @brief Method TryParse, addr 0x59adb98, size 0x1f0, virtual false, abstract: false, final false
  inline bool TryParse(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse_StringParser();

  // Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: None },
  // CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeSpanParse_StringParser(::System::ReadOnlySpan_1<char16_t> _str, char16_t _ch, int32_t _pos, int32_t _len) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3617 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _str, offset: 0x0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _str;

  /// @brief Field _ch, offset: 0x10, size: 0x2, def value: None
  char16_t _ch;

  /// @brief Field _pos, offset: 0x14, size: 0x4, def value: None
  int32_t _pos;

  /// @brief Field _len, offset: 0x18, size: 0x4, def value: None
  int32_t _len;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanParse_StringParser, _str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_StringParser, _ch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_StringParser, _pos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanParse_StringParser, _len) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse_StringParser, 0x20>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.TimeSpanParse
class CORDL_TYPE TimeSpanParse : public ::System::Object {
public:
  // Declarations
  using ParseFailureKind = ::System::Globalization::TimeSpanParse_ParseFailureKind;

  using StringParser = ::System::Globalization::TimeSpanParse_StringParser;

  using TTT = ::System::Globalization::TimeSpanParse_TTT;

  using TimeSpanRawInfo = ::System::Globalization::TimeSpanParse_TimeSpanRawInfo;

  using TimeSpanResult = ::System::Globalization::TimeSpanParse_TimeSpanResult;

  using TimeSpanStandardStyles = ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles;

  using TimeSpanToken = ::System::Globalization::TimeSpanParse_TimeSpanToken;

  using TimeSpanTokenizer = ::System::Globalization::TimeSpanParse_TimeSpanTokenizer;

  /// @brief Method Parse, addr 0x59a86ec, size 0x34, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::System::ReadOnlySpan_1<char16_t> input, ::System::IFormatProvider* formatProvider);

  /// @brief Method ParseExactDigits, addr 0x59ad96c, size 0xc4, virtual false, abstract: false, final false
  static inline bool ParseExactDigits(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, int32_t minDigitLength, int32_t maxDigitLength, ::ByRef<int32_t> zeroes,
                                      ::ByRef<int32_t> result);

  /// @brief Method ParseExactDigits, addr 0x59ad940, size 0x2c, virtual false, abstract: false, final false
  static inline bool ParseExactDigits(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, int32_t minDigitLength, ::ByRef<int32_t> result);

  /// @brief Method ParseExactLiteral, addr 0x59ada30, size 0x84, virtual false, abstract: false, final false
  static inline bool ParseExactLiteral(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanTokenizer> tokenizer, ::System::Text::StringBuilder* enquotedString);

  /// @brief Method Pow10, addr 0x59a8198, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t Pow10(int32_t pow);

  /// @brief Method ProcessTerminalState, addr 0x59a8f54, size 0x17c, virtual false, abstract: false, final false
  static inline bool ProcessTerminalState(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                          ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method ProcessTerminal_D, addr 0x59a90d0, size 0x2c8, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_D(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                       ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method ProcessTerminal_DHMSF, addr 0x59aad24, size 0x25c, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_DHMSF(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                           ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method ProcessTerminal_HM, addr 0x59a9398, size 0x2c0, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_HM(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                        ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method ProcessTerminal_HMS_F_D, addr 0x59aa208, size 0xb1c, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_HMS_F_D(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                             ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method ProcessTerminal_HM_S_D, addr 0x59a9658, size 0xbb0, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_HM_S_D(::ByRef<::System::Globalization::TimeSpanParse_TimeSpanRawInfo> raw, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style,
                                            ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method TryParseByFormat, addr 0x59ad234, size 0x700, virtual false, abstract: false, final false
  static inline bool TryParseByFormat(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::TimeSpanStyles styles,
                                      ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method TryParseExact, addr 0x59a88a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                   ::System::Globalization::TimeSpanStyles styles, ::ByRef<::System::TimeSpan> result);

  /// @brief Method TryParseExactTimeSpan, addr 0x59a88dc, size 0x188, virtual false, abstract: false, final false
  static inline bool TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                           ::System::Globalization::TimeSpanStyles styles, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method TryParseTimeSpan, addr 0x59a872c, size 0x174, virtual false, abstract: false, final false
  static inline bool TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::Globalization::TimeSpanParse_TimeSpanStandardStyles style, ::System::IFormatProvider* formatProvider,
                                      ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method TryParseTimeSpanConstant, addr 0x59ad200, size 0x34, virtual false, abstract: false, final false
  static inline bool TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::Globalization::TimeSpanParse_TimeSpanResult> result);

  /// @brief Method TryTimeToTicks, addr 0x59a8540, size 0x150, virtual false, abstract: false, final false
  static inline bool TryTimeToTicks(bool positive, ::System::Globalization::TimeSpanParse_TimeSpanToken days, ::System::Globalization::TimeSpanParse_TimeSpanToken hours,
                                    ::System::Globalization::TimeSpanParse_TimeSpanToken minutes, ::System::Globalization::TimeSpanParse_TimeSpanToken seconds,
                                    ::System::Globalization::TimeSpanParse_TimeSpanToken fraction, ::ByRef<int64_t> result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanParse(TimeSpanParse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanParse(TimeSpanParse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse, 0x10>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_ParseFailureKind, "System.Globalization", "TimeSpanParse/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_TTT, "System.Globalization", "TimeSpanParse/TTT");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_TimeSpanStandardStyles, "System.Globalization", "TimeSpanParse/TimeSpanStandardStyles");
NEED_NO_BOX(::System::Globalization::TimeSpanParse);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse*, "System.Globalization", "TimeSpanParse");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_StringParser, "System.Globalization", "TimeSpanParse/StringParser");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_TimeSpanRawInfo, "System.Globalization", "TimeSpanParse/TimeSpanRawInfo");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_TimeSpanResult, "System.Globalization", "TimeSpanParse/TimeSpanResult");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse_TimeSpanTokenizer, "System.Globalization", "TimeSpanParse/TimeSpanTokenizer");
