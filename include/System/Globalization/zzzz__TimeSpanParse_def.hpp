#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct TimeSpanStyles;
}
namespace System::Globalization {
struct __TimeSpanFormat__FormatLiterals;
}
namespace System::Globalization {
struct __TimeSpanParse__ParseFailureKind;
}
namespace System::Globalization {
struct __TimeSpanParse__StringParser;
}
namespace System::Globalization {
struct __TimeSpanParse__TTT;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanRawInfo;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanResult;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanStandardStyles;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanToken;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanTokenizer;
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
struct __TimeSpanParse__ParseFailureKind;
}
namespace System::Globalization {
struct __TimeSpanParse__TTT;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanStandardStyles;
}
namespace System::Globalization {
class TimeSpanParse;
}
namespace System::Globalization {
struct __TimeSpanParse__StringParser;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanRawInfo;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanResult;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanToken;
}
namespace System::Globalization {
struct __TimeSpanParse__TimeSpanTokenizer;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__TimeSpanParse__ParseFailureKind);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TTT);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles);
MARK_REF_PTR_T(::System::Globalization::TimeSpanParse);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__StringParser);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanResult);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanToken);
MARK_VAL_T(::System::Globalization::__TimeSpanParse__TimeSpanTokenizer);
// Type: ::ParseFailureKind
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3682))
// CS Name: ::TimeSpanParse::ParseFailureKind
struct CORDL_TYPE __TimeSpanParse__ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____TimeSpanParse__ParseFailureKind_Unwrapped
  enum struct ____TimeSpanParse__ParseFailureKind_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_ArgumentNull = static_cast<uint8_t>(0x1u),
    __E_Format = static_cast<uint8_t>(0x2u),
    __E_FormatWithParameter = static_cast<uint8_t>(0x3u),
    __E_Overflow = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeSpanParse__ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<____TimeSpanParse__ParseFailureKind_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__ParseFailureKind(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__ParseFailureKind();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field None value: static_cast<uint8_t>(0x0u)
  static ::System::Globalization::__TimeSpanParse__ParseFailureKind const None;

  /// @brief Field ArgumentNull value: static_cast<uint8_t>(0x1u)
  static ::System::Globalization::__TimeSpanParse__ParseFailureKind const ArgumentNull;

  /// @brief Field Format value: static_cast<uint8_t>(0x2u)
  static ::System::Globalization::__TimeSpanParse__ParseFailureKind const Format;

  /// @brief Field FormatWithParameter value: static_cast<uint8_t>(0x3u)
  static ::System::Globalization::__TimeSpanParse__ParseFailureKind const FormatWithParameter;

  /// @brief Field Overflow value: static_cast<uint8_t>(0x4u)
  static ::System::Globalization::__TimeSpanParse__ParseFailureKind const Overflow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__ParseFailureKind, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__ParseFailureKind, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::TimeSpanStandardStyles
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3683))
// CS Name: ::TimeSpanParse::TimeSpanStandardStyles
struct CORDL_TYPE __TimeSpanParse__TimeSpanStandardStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____TimeSpanParse__TimeSpanStandardStyles_Unwrapped
  enum struct ____TimeSpanParse__TimeSpanStandardStyles_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_Invariant = static_cast<uint8_t>(0x1u),
    __E_Localized = static_cast<uint8_t>(0x2u),
    __E_RequireFull = static_cast<uint8_t>(0x4u),
    __E_Any = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeSpanParse__TimeSpanStandardStyles_Unwrapped() const noexcept {
    return static_cast<____TimeSpanParse__TimeSpanStandardStyles_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__TimeSpanStandardStyles(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__TimeSpanStandardStyles();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field None value: static_cast<uint8_t>(0x0u)
  static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const None;

  /// @brief Field Invariant value: static_cast<uint8_t>(0x1u)
  static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const Invariant;

  /// @brief Field Localized value: static_cast<uint8_t>(0x2u)
  static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const Localized;

  /// @brief Field RequireFull value: static_cast<uint8_t>(0x4u)
  static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const RequireFull;

  /// @brief Field Any value: static_cast<uint8_t>(0x3u)
  static ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles const Any;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::TTT
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3684))
// CS Name: ::TimeSpanParse::TTT
struct CORDL_TYPE __TimeSpanParse__TTT {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____TimeSpanParse__TTT_Unwrapped
  enum struct ____TimeSpanParse__TTT_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_End = static_cast<uint8_t>(0x1u),
    __E_Num = static_cast<uint8_t>(0x2u),
    __E_Sep = static_cast<uint8_t>(0x3u),
    __E_NumOverflow = static_cast<uint8_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeSpanParse__TTT_Unwrapped() const noexcept {
    return static_cast<____TimeSpanParse__TTT_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__TTT(uint8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__TTT();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field None value: static_cast<uint8_t>(0x0u)
  static ::System::Globalization::__TimeSpanParse__TTT const None;

  /// @brief Field End value: static_cast<uint8_t>(0x1u)
  static ::System::Globalization::__TimeSpanParse__TTT const End;

  /// @brief Field Num value: static_cast<uint8_t>(0x2u)
  static ::System::Globalization::__TimeSpanParse__TTT const Num;

  /// @brief Field Sep value: static_cast<uint8_t>(0x3u)
  static ::System::Globalization::__TimeSpanParse__TTT const Sep;

  /// @brief Field NumOverflow value: static_cast<uint8_t>(0x4u)
  static ::System::Globalization::__TimeSpanParse__TTT const NumOverflow;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TTT, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TTT, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::TimeSpanToken
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2464)), TypeDefinitionIndex(TypeDefinitionIndex(3684)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(3685)) CS Name: ::TimeSpanParse::TimeSpanToken
struct CORDL_TYPE __TimeSpanParse__TimeSpanToken {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x257f240, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::__TimeSpanParse__TTT type);

  /// @brief Method .ctor, addr 0x257be48, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t number);

  /// @brief Method .ctor, addr 0x257f218, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t number, int32_t leadingZeroes);

  /// @brief Method .ctor, addr 0x257f250, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::__TimeSpanParse__TTT type, int32_t number, int32_t leadingZeroes, ::System::ReadOnlySpan_1<char16_t> separator);

  /// @brief Method IsInvalidFraction, addr 0x2578830, size 0x5c, virtual false, abstract: false, final false
  inline bool IsInvalidFraction();

  // Ctor Parameters [CppParam { name: "_ttt", ty: "::System::Globalization::__TimeSpanParse__TTT", modifiers: "", def_value: None }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__TimeSpanToken(::System::Globalization::__TimeSpanParse__TTT _ttt, int32_t _num, int32_t _zeroes, ::System::ReadOnlySpan_1<char16_t> _sep) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__TimeSpanToken();

  /// @brief Field _ttt, offset: 0x0, size: 0x1, def value: None
  ::System::Globalization::__TimeSpanParse__TTT _ttt;

  /// @brief Field _num, offset: 0x4, size: 0x4, def value: None
  int32_t _num;

  /// @brief Field _zeroes, offset: 0x8, size: 0x4, def value: None
  int32_t _zeroes;

  /// @brief Field _sep, offset: 0x10, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _sep;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanToken, _ttt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanToken, _num) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanToken, _zeroes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanToken, _sep) == 0x10, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::TimeSpanTokenizer
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2464)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3686))
// CS Name: ::TimeSpanParse::TimeSpanTokenizer
struct CORDL_TYPE __TimeSpanParse__TimeSpanTokenizer {
public:
  // Declarations
  __declspec(property(get = get_EOL)) bool EOL;

  __declspec(property(get = get_NextChar)) char16_t NextChar;

  /// @brief Method .ctor, addr 0x2578ca4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> input);

  /// @brief Method .ctor, addr 0x257efe0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<char16_t> input, int32_t startPosition);

  /// @brief Method GetNextToken, addr 0x2578cfc, size 0x240, virtual false, abstract: false, final false
  inline ::System::Globalization::__TimeSpanParse__TimeSpanToken GetNextToken();

  /// @brief Method get_EOL, addr 0x257f1cc, size 0x4c, virtual false, abstract: false, final false
  inline bool get_EOL();

  /// @brief Method BackOne, addr 0x257f22c, size 0x14, virtual false, abstract: false, final false
  inline void BackOne();

  /// @brief Method get_NextChar, addr 0x257f16c, size 0x60, virtual false, abstract: false, final false
  inline char16_t get_NextChar();

  // Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t> _value, int32_t _pos) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__TimeSpanTokenizer();

  /// @brief Field _value, offset: 0x0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _value;

  /// @brief Field _pos, offset: 0x10, size: 0x4, def value: None
  int32_t _pos;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanTokenizer, _value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanTokenizer, _pos) == 0x10, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::TimeSpanRawInfo
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 392, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2464)), TypeDefinitionIndex(TypeDefinitionIndex(3680)), TypeDefinitionIndex(TypeDefinitionIndex(3684)),
// TypeDefinitionIndex(TypeDefinitionIndex(3685)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(3687)) CS
// Name: ::TimeSpanParse::TimeSpanRawInfo
struct CORDL_TYPE __TimeSpanParse__TimeSpanRawInfo {
public:
  // Declarations
  __declspec(property(get = get_PositiveInvariant))::System::Globalization::__TimeSpanFormat__FormatLiterals PositiveInvariant;

  __declspec(property(get = get_NegativeInvariant))::System::Globalization::__TimeSpanFormat__FormatLiterals NegativeInvariant;

  __declspec(property(get = get_PositiveLocalized))::System::Globalization::__TimeSpanFormat__FormatLiterals PositiveLocalized;

  __declspec(property(get = get_NegativeLocalized))::System::Globalization::__TimeSpanFormat__FormatLiterals NegativeLocalized;

  /// @brief Method get_PositiveInvariant, addr 0x257f260, size 0x68, virtual false, abstract: false, final false
  inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_PositiveInvariant();

  /// @brief Method get_NegativeInvariant, addr 0x257f2c8, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_NegativeInvariant();

  /// @brief Method get_PositiveLocalized, addr 0x257bce4, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_PositiveLocalized();

  /// @brief Method get_NegativeLocalized, addr 0x257bd94, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Globalization::__TimeSpanFormat__FormatLiterals get_NegativeLocalized();

  /// @brief Method FullAppCompatMatch, addr 0x257cb5c, size 0x678, virtual false, abstract: false, final false
  inline bool FullAppCompatMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method PartialAppCompatMatch, addr 0x257dc6c, size 0x544, virtual false, abstract: false, final false
  inline bool PartialAppCompatMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullMatch, addr 0x257b530, size 0x7b4, virtual false, abstract: false, final false
  inline bool FullMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullDMatch, addr 0x257e5c8, size 0x2e4, virtual false, abstract: false, final false
  inline bool FullDMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullHMMatch, addr 0x257e1b0, size 0x418, virtual false, abstract: false, final false
  inline bool FullHMMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullDHMMatch, addr 0x257d720, size 0x54c, virtual false, abstract: false, final false
  inline bool FullDHMMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullHMSMatch, addr 0x257d1d4, size 0x54c, virtual false, abstract: false, final false
  inline bool FullHMSMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullDHMSMatch, addr 0x257c4dc, size 0x680, virtual false, abstract: false, final false
  inline bool FullDHMSMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method FullHMSFMatch, addr 0x257be5c, size 0x680, virtual false, abstract: false, final false
  inline bool FullHMSFMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals pattern);

  /// @brief Method Init, addr 0x2578cb0, size 0x4c, virtual false, abstract: false, final false
  inline void Init(::System::Globalization::DateTimeFormatInfo* dtfi);

  /// @brief Method ProcessToken, addr 0x2578f3c, size 0x120, virtual false, abstract: false, final false
  inline bool ProcessToken(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanToken> tok, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method AddSep, addr 0x257f334, size 0x114, virtual false, abstract: false, final false
  inline bool AddSep(::System::ReadOnlySpan_1<char16_t> sep, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method AddNum, addr 0x257f448, size 0x1118, virtual false, abstract: false, final false
  inline bool AddNum(::System::Globalization::__TimeSpanParse__TimeSpanToken num, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  // Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::System::Globalization::__TimeSpanParse__TTT", modifiers: "", def_value: None }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "_posLoc", ty: "::System::Globalization::__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_negLoc", ty:
  // "::System::Globalization::__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: None }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_negLocInit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_fullNegPattern", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "_numbers0", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name:
  // "_numbers1", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers2", ty:
  // "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_numbers3", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken",
  // modifiers: "", def_value: None }, CppParam { name: "_numbers4", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: None }, CppParam { name: "_literals0", ty:
  // "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name:
  // "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None
  // }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_literals5", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers:
  // "", def_value: None }]
  constexpr __TimeSpanParse__TimeSpanRawInfo(::System::Globalization::__TimeSpanParse__TTT _lastSeenTTT, int32_t _tokenCount, int32_t _sepCount, int32_t _numCount,
                                             ::System::Globalization::__TimeSpanFormat__FormatLiterals _posLoc, ::System::Globalization::__TimeSpanFormat__FormatLiterals _negLoc, bool _posLocInit,
                                             bool _negLocInit, ::StringW _fullPosPattern, ::StringW _fullNegPattern, ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers0,
                                             ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers1, ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers2,
                                             ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers3, ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers4,
                                             ::System::ReadOnlySpan_1<char16_t> _literals0, ::System::ReadOnlySpan_1<char16_t> _literals1, ::System::ReadOnlySpan_1<char16_t> _literals2,
                                             ::System::ReadOnlySpan_1<char16_t> _literals3, ::System::ReadOnlySpan_1<char16_t> _literals4, ::System::ReadOnlySpan_1<char16_t> _literals5) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__TimeSpanRawInfo();

  /// @brief Field _lastSeenTTT, offset: 0x0, size: 0x1, def value: None
  ::System::Globalization::__TimeSpanParse__TTT _lastSeenTTT;

  /// @brief Field _tokenCount, offset: 0x4, size: 0x4, def value: None
  int32_t _tokenCount;

  /// @brief Field _sepCount, offset: 0x8, size: 0x4, def value: None
  int32_t _sepCount;

  /// @brief Field _numCount, offset: 0xc, size: 0x4, def value: None
  int32_t _numCount;

  /// @brief Field _posLoc, offset: 0x10, size: 0x28, def value: None
  ::System::Globalization::__TimeSpanFormat__FormatLiterals _posLoc;

  /// @brief Field _negLoc, offset: 0x38, size: 0x28, def value: None
  ::System::Globalization::__TimeSpanFormat__FormatLiterals _negLoc;

  /// @brief Field _posLocInit, offset: 0x60, size: 0x1, def value: None
  bool _posLocInit;

  /// @brief Field _negLocInit, offset: 0x61, size: 0x1, def value: None
  bool _negLocInit;

  /// @brief Field _fullPosPattern, offset: 0x68, size: 0x8, def value: None
  ::StringW _fullPosPattern;

  /// @brief Field _fullNegPattern, offset: 0x70, size: 0x8, def value: None
  ::StringW _fullNegPattern;

  /// @brief Field _numbers0, offset: 0x78, size: 0x20, def value: None
  ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers0;

  /// @brief Field _numbers1, offset: 0x98, size: 0x20, def value: None
  ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers1;

  /// @brief Field _numbers2, offset: 0xb8, size: 0x20, def value: None
  ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers2;

  /// @brief Field _numbers3, offset: 0xd8, size: 0x20, def value: None
  ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers3;

  /// @brief Field _numbers4, offset: 0xf8, size: 0x20, def value: None
  ::System::Globalization::__TimeSpanParse__TimeSpanToken _numbers4;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, 0x178>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _lastSeenTTT) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _tokenCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _sepCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _numCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _posLoc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _negLoc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _posLocInit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _negLocInit) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _fullPosPattern) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _fullNegPattern) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _numbers0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _numbers1) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _numbers2) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _numbers3) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _numbers4) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _literals0) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _literals1) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _literals2) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _literals3) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _literals4) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, _literals5) == 0x168, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::TimeSpanResult
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2484))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3688))
// CS Name: ::TimeSpanParse::TimeSpanResult
struct CORDL_TYPE __TimeSpanParse__TimeSpanResult {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2580560, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool throwOnFailure);

  /// @brief Method SetFailure, addr 0x2580570, size 0x148, virtual false, abstract: false, final false
  inline bool SetFailure(::System::Globalization::__TimeSpanParse__ParseFailureKind kind, ::StringW resourceKey, ::System::Object* messageArgument, ::StringW argumentName);

  // Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__TimeSpanResult(::System::TimeSpan parsedTimeSpan, bool _throwOnFailure) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__TimeSpanResult();

  /// @brief Field parsedTimeSpan, offset: 0x0, size: 0x8, def value: None
  ::System::TimeSpan parsedTimeSpan;

  /// @brief Field _throwOnFailure, offset: 0x8, size: 0x1, def value: None
  bool _throwOnFailure;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__TimeSpanResult, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanResult, parsedTimeSpan) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__TimeSpanResult, _throwOnFailure) == 0x8, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::StringParser
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2464)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3689))
// CS Name: ::TimeSpanParse::StringParser
struct CORDL_TYPE __TimeSpanParse__StringParser {
public:
  // Declarations
  /// @brief Method NextChar, addr 0x25806b8, size 0x4c, virtual false, abstract: false, final false
  inline void NextChar();

  /// @brief Method NextNonDigit, addr 0x2580704, size 0x5c, virtual false, abstract: false, final false
  inline char16_t NextNonDigit();

  /// @brief Method TryParse, addr 0x2580760, size 0x1ec, virtual false, abstract: false, final false
  inline bool TryParse(::System::ReadOnlySpan_1<char16_t> input, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ParseInt, addr 0x2580b3c, size 0x118, virtual false, abstract: false, final false
  inline bool ParseInt(int32_t max, ByRef<int32_t> i, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ParseTime, addr 0x258097c, size 0x1c0, virtual false, abstract: false, final false
  inline bool ParseTime(ByRef<int64_t> time, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method SkipBlanks, addr 0x258094c, size 0x30, virtual false, abstract: false, final false
  inline void SkipBlanks();

  // Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: None },
  // CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimeSpanParse__StringParser(::System::ReadOnlySpan_1<char16_t> _str, char16_t _ch, int32_t _pos, int32_t _len) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanParse__StringParser();

  /// @brief Field _str, offset: 0x0, size: 0x10, def value: None
  ::System::ReadOnlySpan_1<char16_t> _str;

  /// @brief Field _ch, offset: 0x10, size: 0x2, def value: None
  char16_t _ch;

  /// @brief Field _pos, offset: 0x14, size: 0x4, def value: None
  int32_t _pos;

  /// @brief Field _len, offset: 0x18, size: 0x4, def value: None
  int32_t _len;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanParse__StringParser, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__StringParser, _str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__StringParser, _ch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__StringParser, _pos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanParse__StringParser, _len) == 0x18, "Offset mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::TimeSpanParse
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3690))
// CS Name: ::System.Globalization::TimeSpanParse*
class CORDL_TYPE TimeSpanParse : public ::System::Object {
public:
  // Declarations
  using StringParser = ::System::Globalization::__TimeSpanParse__StringParser;

  using TimeSpanResult = ::System::Globalization::__TimeSpanParse__TimeSpanResult;

  using TimeSpanRawInfo = ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo;

  using TimeSpanTokenizer = ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer;

  using TimeSpanToken = ::System::Globalization::__TimeSpanParse__TimeSpanToken;

  using TTT = ::System::Globalization::__TimeSpanParse__TTT;

  using TimeSpanStandardStyles = ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles;

  using ParseFailureKind = ::System::Globalization::__TimeSpanParse__ParseFailureKind;

  /// @brief Method Pow10, addr 0x2578298, size 0x90, virtual false, abstract: false, final false
  static inline int64_t Pow10(int32_t pow);

  /// @brief Method TryTimeToTicks, addr 0x25786d0, size 0x160, virtual false, abstract: false, final false
  static inline bool TryTimeToTicks(bool positive, ::System::Globalization::__TimeSpanParse__TimeSpanToken days, ::System::Globalization::__TimeSpanParse__TimeSpanToken hours,
                                    ::System::Globalization::__TimeSpanParse__TimeSpanToken minutes, ::System::Globalization::__TimeSpanParse__TimeSpanToken seconds,
                                    ::System::Globalization::__TimeSpanParse__TimeSpanToken fraction, ByRef<int64_t> result);

  /// @brief Method Parse, addr 0x257888c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::System::ReadOnlySpan_1<char16_t> input, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryParseExact, addr 0x2578a80, size 0x98, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                   ::System::Globalization::TimeSpanStyles styles, ByRef<::System::TimeSpan> result);

  /// @brief Method TryParseTimeSpan, addr 0x25788e4, size 0x19c, virtual false, abstract: false, final false
  static inline bool TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style, ::System::IFormatProvider* formatProvider,
                                      ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ProcessTerminalState, addr 0x257905c, size 0x138, virtual false, abstract: false, final false
  static inline bool ProcessTerminalState(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo> raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style,
                                          ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ProcessTerminal_DHMSF, addr 0x257b2c0, size 0x270, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_DHMSF(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo> raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style,
                                           ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ProcessTerminal_HMS_F_D, addr 0x257a6e4, size 0xbdc, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_HMS_F_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo> raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style,
                                             ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ProcessTerminal_HM_S_D, addr 0x257987c, size 0xe68, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_HM_S_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo> raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style,
                                            ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ProcessTerminal_HM, addr 0x2579524, size 0x358, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_HM(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo> raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style,
                                        ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ProcessTerminal_D, addr 0x2579194, size 0x390, virtual false, abstract: false, final false
  static inline bool ProcessTerminal_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo> raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles style,
                                       ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method TryParseExactTimeSpan, addr 0x2578b18, size 0x18c, virtual false, abstract: false, final false
  static inline bool TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider,
                                           ::System::Globalization::TimeSpanStyles styles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method TryParseByFormat, addr 0x257e8e4, size 0x6fc, virtual false, abstract: false, final false
  static inline bool TryParseByFormat(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::TimeSpanStyles styles,
                                      ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  /// @brief Method ParseExactDigits, addr 0x257efec, size 0x30, virtual false, abstract: false, final false
  static inline bool ParseExactDigits(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer> tokenizer, int32_t minDigitLength, ByRef<int32_t> result);

  /// @brief Method ParseExactDigits, addr 0x257f01c, size 0xc4, virtual false, abstract: false, final false
  static inline bool ParseExactDigits(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer> tokenizer, int32_t minDigitLength, int32_t maxDigitLength, ByRef<int32_t> zeroes,
                                      ByRef<int32_t> result);

  /// @brief Method ParseExactLiteral, addr 0x257f0e0, size 0x8c, virtual false, abstract: false, final false
  static inline bool ParseExactLiteral(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer> tokenizer, ::System::Text::StringBuilder* enquotedString);

  /// @brief Method TryParseTimeSpanConstant, addr 0x257e8ac, size 0x38, virtual false, abstract: false, final false
  static inline bool TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t> input, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult> result);

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanParse(TimeSpanParse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanParse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanParse(TimeSpanParse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanParse();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanParse, 0x10>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__ParseFailureKind, "System.Globalization", "TimeSpanParse/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TTT, "System.Globalization", "TimeSpanParse/TTT");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, "System.Globalization", "TimeSpanParse/TimeSpanStandardStyles");
NEED_NO_BOX(::System::Globalization::TimeSpanParse);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanParse*, "System.Globalization", "TimeSpanParse");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__StringParser, "System.Globalization", "TimeSpanParse/StringParser");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanRawInfo, "System.Globalization", "TimeSpanParse/TimeSpanRawInfo");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanResult, "System.Globalization", "TimeSpanParse/TimeSpanResult");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanToken, "System.Globalization", "TimeSpanParse/TimeSpanToken");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanParse__TimeSpanTokenizer, "System.Globalization", "TimeSpanParse/TimeSpanTokenizer");
