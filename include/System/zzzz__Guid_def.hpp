#pragma once
// IWYU pragma private; include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid)
namespace System {
class Exception;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct __Guid__GuidParseThrowStyle;
}
namespace System {
struct __Guid__GuidResult;
}
namespace System {
struct __Guid__GuidStyles;
}
namespace System {
struct __Guid__ParseFailureKind;
}
// Forward declare root types
namespace System {
struct __Guid__GuidParseThrowStyle;
}
namespace System {
struct __Guid__GuidStyles;
}
namespace System {
struct __Guid__ParseFailureKind;
}
namespace System {
struct Guid;
}
namespace System {
struct __Guid__GuidResult;
}
// Write type traits
MARK_VAL_T(::System::__Guid__GuidParseThrowStyle);
MARK_VAL_T(::System::__Guid__GuidStyles);
MARK_VAL_T(::System::__Guid__ParseFailureKind);
MARK_VAL_T(::System::Guid);
MARK_VAL_T(::System::__Guid__GuidResult);
// Type: ::GuidStyles
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Guid::GuidStyles
struct CORDL_TYPE __Guid__GuidStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Guid__GuidStyles_Unwrapped
  enum struct ____Guid__GuidStyles_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AllowParenthesis = static_cast<int32_t>(0x1),
    __E_AllowBraces = static_cast<int32_t>(0x2),
    __E_AllowDashes = static_cast<int32_t>(0x4),
    __E_AllowHexPrefix = static_cast<int32_t>(0x8),
    __E_RequireParenthesis = static_cast<int32_t>(0x10),
    __E_RequireBraces = static_cast<int32_t>(0x20),
    __E_RequireDashes = static_cast<int32_t>(0x40),
    __E_RequireHexPrefix = static_cast<int32_t>(0x80),
    __E_HexFormat = static_cast<int32_t>(0xa0),
    __E_NumberFormat = static_cast<int32_t>(0x0),
    __E_DigitFormat = static_cast<int32_t>(0x40),
    __E_BraceFormat = static_cast<int32_t>(0x60),
    __E_ParenthesisFormat = static_cast<int32_t>(0x50),
    __E_Any = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Guid__GuidStyles_Unwrapped() const noexcept {
    return static_cast<____Guid__GuidStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__GuidStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Guid__GuidStyles(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllowBraces value: static_cast<int32_t>(0x2)
  static ::System::__Guid__GuidStyles const AllowBraces;

  /// @brief Field AllowDashes value: static_cast<int32_t>(0x4)
  static ::System::__Guid__GuidStyles const AllowDashes;

  /// @brief Field AllowHexPrefix value: static_cast<int32_t>(0x8)
  static ::System::__Guid__GuidStyles const AllowHexPrefix;

  /// @brief Field AllowParenthesis value: static_cast<int32_t>(0x1)
  static ::System::__Guid__GuidStyles const AllowParenthesis;

  /// @brief Field Any value: static_cast<int32_t>(0xf)
  static ::System::__Guid__GuidStyles const Any;

  /// @brief Field BraceFormat value: static_cast<int32_t>(0x60)
  static ::System::__Guid__GuidStyles const BraceFormat;

  /// @brief Field DigitFormat value: static_cast<int32_t>(0x40)
  static ::System::__Guid__GuidStyles const DigitFormat;

  /// @brief Field HexFormat value: static_cast<int32_t>(0xa0)
  static ::System::__Guid__GuidStyles const HexFormat;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Guid__GuidStyles const None;

  /// @brief Field NumberFormat value: static_cast<int32_t>(0x0)
  static ::System::__Guid__GuidStyles const NumberFormat;

  /// @brief Field ParenthesisFormat value: static_cast<int32_t>(0x50)
  static ::System::__Guid__GuidStyles const ParenthesisFormat;

  /// @brief Field RequireBraces value: static_cast<int32_t>(0x20)
  static ::System::__Guid__GuidStyles const RequireBraces;

  /// @brief Field RequireDashes value: static_cast<int32_t>(0x40)
  static ::System::__Guid__GuidStyles const RequireDashes;

  /// @brief Field RequireHexPrefix value: static_cast<int32_t>(0x80)
  static ::System::__Guid__GuidStyles const RequireHexPrefix;

  /// @brief Field RequireParenthesis value: static_cast<int32_t>(0x10)
  static ::System::__Guid__GuidStyles const RequireParenthesis;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Guid__GuidStyles, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Guid__GuidStyles, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::GuidParseThrowStyle
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Guid::GuidParseThrowStyle
struct CORDL_TYPE __Guid__GuidParseThrowStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Guid__GuidParseThrowStyle_Unwrapped
  enum struct ____Guid__GuidParseThrowStyle_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x1),
    __E_AllButOverflow = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Guid__GuidParseThrowStyle_Unwrapped() const noexcept {
    return static_cast<____Guid__GuidParseThrowStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__GuidParseThrowStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Guid__GuidParseThrowStyle(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x1)
  static ::System::__Guid__GuidParseThrowStyle const All;

  /// @brief Field AllButOverflow value: static_cast<int32_t>(0x2)
  static ::System::__Guid__GuidParseThrowStyle const AllButOverflow;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Guid__GuidParseThrowStyle const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Guid__GuidParseThrowStyle, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Guid__GuidParseThrowStyle, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::ParseFailureKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Guid::ParseFailureKind
struct CORDL_TYPE __Guid__ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Guid__ParseFailureKind_Unwrapped
  enum struct ____Guid__ParseFailureKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ArgumentNull = static_cast<int32_t>(0x1),
    __E_Format = static_cast<int32_t>(0x2),
    __E_FormatWithParameter = static_cast<int32_t>(0x3),
    __E_NativeException = static_cast<int32_t>(0x4),
    __E_FormatWithInnerException = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Guid__ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<____Guid__ParseFailureKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__ParseFailureKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Guid__ParseFailureKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ArgumentNull value: static_cast<int32_t>(0x1)
  static ::System::__Guid__ParseFailureKind const ArgumentNull;

  /// @brief Field Format value: static_cast<int32_t>(0x2)
  static ::System::__Guid__ParseFailureKind const Format;

  /// @brief Field FormatWithInnerException value: static_cast<int32_t>(0x5)
  static ::System::__Guid__ParseFailureKind const FormatWithInnerException;

  /// @brief Field FormatWithParameter value: static_cast<int32_t>(0x3)
  static ::System::__Guid__ParseFailureKind const FormatWithParameter;

  /// @brief Field NativeException value: static_cast<int32_t>(0x4)
  static ::System::__Guid__ParseFailureKind const NativeException;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Guid__ParseFailureKind const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Guid__ParseFailureKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Guid__ParseFailureKind, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::Guid
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::Guid
struct CORDL_TYPE Guid {
public:
  // Declarations
  using GuidParseThrowStyle = ::System::__Guid__GuidParseThrowStyle;

  using GuidResult = ::System::__Guid__GuidResult;

  using GuidStyles = ::System::__Guid__GuidStyles;

  using ParseFailureKind = ::System::__Guid__ParseFailureKind;

  /// @brief Field Empty, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Guid Empty;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::Guid>"
  constexpr operator ::System::IComparable_1<::System::Guid>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
  constexpr operator ::System::IEquatable_1<::System::Guid>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method CompareTo, addr 0x295cbcc, size 0xdc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Guid value);

  /// @brief Method CompareTo, addr 0x295ca40, size 0x18c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method EatAllWhitespace, addr 0x295bd2c, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> EatAllWhitespace(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method Equals, addr 0x295c9ec, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::System::Guid g);

  /// @brief Method Equals, addr 0x295c944, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x295c92c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetResult, addr 0x295ca30, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetResult(uint32_t me, uint32_t them);

  /// @brief Method HexToChar, addr 0x295cd2c, size 0x1c, virtual false, abstract: false, final false
  static inline char16_t HexToChar(int32_t a);

  /// @brief Method HexsToChars, addr 0x295cd48, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t HexsToChars(::cordl_internals::Ptr<char16_t> guidChars, int32_t a, int32_t b);

  /// @brief Method HexsToCharsHexOutput, addr 0x295cdc4, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t HexsToCharsHexOutput(::cordl_internals::Ptr<char16_t> guidChars, int32_t a, int32_t b);

  /// @brief Method IsHexPrefix, addr 0x295bf68, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsHexPrefix(::System::ReadOnlySpan_1<char16_t> str, int32_t i);

  /// @brief Method NewGuid, addr 0x295a47c, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Guid NewGuid();

  /// @brief Method Parse, addr 0x295acbc, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Guid Parse(::StringW input);

  /// @brief Method Parse, addr 0x295ad54, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Guid Parse(::System::ReadOnlySpan_1<char16_t> input);

  /// @brief Method StringToInt, addr 0x295c204, size 0x1f4, virtual false, abstract: false, final false
  static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ByRef<int32_t> result,
                                 ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToInt, addr 0x295c040, size 0x2c, virtual false, abstract: false, final false
  static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ByRef<int32_t> result, ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToLong, addr 0x295c0b0, size 0x154, virtual false, abstract: false, final false
  static inline bool StringToLong(::System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t flags, ByRef<int64_t> result, ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToShort, addr 0x295c3f8, size 0x34, virtual false, abstract: false, final false
  static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ByRef<int16_t> result,
                                   ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToShort, addr 0x295c06c, size 0x44, virtual false, abstract: false, final false
  static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ByRef<int16_t> result, ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method System.ISpanFormattable.TryFormat, addr 0x295d284, size 0x4, virtual true, abstract: false, final true
  inline bool System_ISpanFormattable_TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method ToByteArray, addr 0x295c54c, size 0x17c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToString, addr 0x295c6c8, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x295cd28, size 0x4, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x295c710, size 0x21c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x295ce60, size 0x424, virtual false, abstract: false, final false
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format);

  /// @brief Method TryParse, addr 0x295adb8, size 0x90, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Guid> result);

  /// @brief Method TryParse, addr 0x295ae48, size 0x50, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> input, ByRef<::System::Guid> result);

  /// @brief Method TryParseExact, addr 0x295ae98, size 0xc4, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::StringW format, ByRef<::System::Guid> result);

  /// @brief Method TryParseExact, addr 0x295af5c, size 0x14c, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ByRef<::System::Guid> result);

  /// @brief Method TryParseGuid, addr 0x295a8f8, size 0x248, virtual false, abstract: false, final false
  static inline bool TryParseGuid(::System::ReadOnlySpan_1<char16_t> guidString, ::System::__Guid__GuidStyles flags, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method TryParseGuidWithDashes, addr 0x295b0c8, size 0x2c4, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithDashes(::System::ReadOnlySpan_1<char16_t> guidString, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method TryParseGuidWithHexPrefix, addr 0x295b38c, size 0x674, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithHexPrefix(::System::ReadOnlySpan_1<char16_t> guidString, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method TryParseGuidWithNoStyle, addr 0x295ba00, size 0x2ec, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithNoStyle(::System::ReadOnlySpan_1<char16_t> guidString, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method WriteByteHelper, addr 0x295c43c, size 0x110, virtual false, abstract: false, final false
  inline void WriteByteHelper(::System::Span_1<uint8_t> destination);

  /// @brief Method .ctor, addr 0x295a688, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int16_t b, int16_t c, ::ArrayW<uint8_t, ::Array<uint8_t>*> d);

  /// @brief Method .ctor, addr 0x295a7c4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);

  /// @brief Method .ctor, addr 0x295a4c8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method .ctor, addr 0x295a560, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> b);

  /// @brief Method .ctor, addr 0x295a804, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::StringW g);

  static inline ::System::Guid getStaticF_Empty();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::Guid>"
  constexpr ::System::IComparable_1<::System::Guid>* i___System__IComparable_1___System__Guid_();

  /// @brief Convert to "::System::IEquatable_1<::System::Guid>"
  constexpr ::System::IEquatable_1<::System::Guid>* i___System__IEquatable_1___System__Guid_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  /// @brief Method op_Equality, addr 0x295cca8, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Guid a, ::System::Guid b);

  /// @brief Method op_Inequality, addr 0x295cce8, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Guid a, ::System::Guid b);

  static inline void setStaticF_Empty(::System::Guid value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Guid();

  // Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_c", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_h", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_k", ty:
  // "uint8_t", modifiers: "", def_value: None }]
  constexpr Guid(int32_t _a, int16_t _b, int16_t _c, uint8_t _d, uint8_t _e, uint8_t _f, uint8_t _g, uint8_t _h, uint8_t _i, uint8_t _j, uint8_t _k) noexcept;

  /// @brief Field _a, offset: 0x0, size: 0x4, def value: None
  int32_t _a;

  /// @brief Field _b, offset: 0x4, size: 0x2, def value: None
  int16_t _b;

  /// @brief Field _c, offset: 0x6, size: 0x2, def value: None
  int16_t _c;

  /// @brief Field _d, offset: 0x8, size: 0x1, def value: None
  uint8_t _d;

  /// @brief Field _e, offset: 0x9, size: 0x1, def value: None
  uint8_t _e;

  /// @brief Field _f, offset: 0xa, size: 0x1, def value: None
  uint8_t _f;

  /// @brief Field _g, offset: 0xb, size: 0x1, def value: None
  uint8_t _g;

  /// @brief Field _h, offset: 0xc, size: 0x1, def value: None
  uint8_t _h;

  /// @brief Field _i, offset: 0xd, size: 0x1, def value: None
  uint8_t _i;

  /// @brief Field _j, offset: 0xe, size: 0x1, def value: None
  uint8_t _j;

  /// @brief Field _k, offset: 0xf, size: 0x1, def value: None
  uint8_t _k;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Guid, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Guid, _a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _b) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _c) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _d) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _e) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _f) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _g) == 0xb, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _h) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _i) == 0xd, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _j) == 0xe, "Offset mismatch!");

static_assert(offsetof(::System::Guid, _k) == 0xf, "Offset mismatch!");

} // namespace System
// Type: ::GuidResult
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Guid::GuidResult
struct CORDL_TYPE __Guid__GuidResult {
public:
  // Declarations
  /// @brief Method GetGuidParseException, addr 0x295ab40, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Exception* GetGuidParseException();

  /// @brief Method Init, addr 0x295d288, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::__Guid__GuidParseThrowStyle canThrow);

  /// @brief Method SetFailure, addr 0x295b0b8, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Guid__ParseFailureKind failure, ::StringW failureMessageID);

  /// @brief Method SetFailure, addr 0x295c034, size 0xc, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Guid__ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument);

  /// @brief Method SetFailure, addr 0x295bcec, size 0x40, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Guid__ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName,
                         ::System::Exception* innerException);

  /// @brief Method SetFailure, addr 0x295c42c, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::Exception* nativeException);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__GuidResult();

  // Ctor Parameters [CppParam { name: "_parsedGuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "_throwStyle", ty: "::System::__Guid__GuidParseThrowStyle", modifiers:
  // "", def_value: None }, CppParam { name: "_failure", ty: "::System::__Guid__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "_failureMessageID", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_failureArgumentName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "_innerException", ty: "::System::Exception*", modifiers: "", def_value: None }]
  constexpr __Guid__GuidResult(::System::Guid _parsedGuid, ::System::__Guid__GuidParseThrowStyle _throwStyle, ::System::__Guid__ParseFailureKind _failure, ::StringW _failureMessageID,
                               ::System::Object* _failureMessageFormatArgument, ::StringW _failureArgumentName, ::System::Exception* _innerException) noexcept;

  /// @brief Field _parsedGuid, offset: 0x0, size: 0x10, def value: None
  ::System::Guid _parsedGuid;

  /// @brief Field _throwStyle, offset: 0x10, size: 0x4, def value: None
  ::System::__Guid__GuidParseThrowStyle _throwStyle;

  /// @brief Field _failure, offset: 0x14, size: 0x4, def value: None
  ::System::__Guid__ParseFailureKind _failure;

  /// @brief Field _failureMessageID, offset: 0x18, size: 0x8, def value: None
  ::StringW _failureMessageID;

  /// @brief Field _failureMessageFormatArgument, offset: 0x20, size: 0x8, def value: None
  ::System::Object* _failureMessageFormatArgument;

  /// @brief Field _failureArgumentName, offset: 0x28, size: 0x8, def value: None
  ::StringW _failureArgumentName;

  /// @brief Field _innerException, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* _innerException;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Guid__GuidResult, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _parsedGuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _throwStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _failure) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _failureMessageID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _failureMessageFormatArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _failureArgumentName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::__Guid__GuidResult, _innerException) == 0x30, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__Guid__GuidParseThrowStyle, "System", "Guid/GuidParseThrowStyle");
DEFINE_IL2CPP_ARG_TYPE(::System::__Guid__GuidStyles, "System", "Guid/GuidStyles");
DEFINE_IL2CPP_ARG_TYPE(::System::__Guid__ParseFailureKind, "System", "Guid/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Guid, "System", "Guid");
DEFINE_IL2CPP_ARG_TYPE(::System::__Guid__GuidResult, "System", "Guid/GuidResult");
