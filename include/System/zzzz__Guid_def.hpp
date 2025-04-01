#pragma once
// IWYU pragma private; include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid)
namespace System {
class Exception;
}
namespace System {
struct Guid_GuidParseThrowStyle;
}
namespace System {
struct Guid_GuidResult;
}
namespace System {
struct Guid_GuidStyles;
}
namespace System {
struct Guid_ParseFailureKind;
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
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System {
struct Guid_GuidParseThrowStyle;
}
namespace System {
struct Guid_GuidStyles;
}
namespace System {
struct Guid_ParseFailureKind;
}
namespace System {
struct Guid;
}
namespace System {
struct Guid_GuidResult;
}
// Write type traits
MARK_VAL_T(::System::Guid_GuidParseThrowStyle);
MARK_VAL_T(::System::Guid_GuidStyles);
MARK_VAL_T(::System::Guid_ParseFailureKind);
MARK_VAL_T(::System::Guid);
MARK_VAL_T(::System::Guid_GuidResult);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Guid/GuidStyles
struct CORDL_TYPE Guid_GuidStyles {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Guid_GuidStyles_Unwrapped
  enum struct __Guid_GuidStyles_Unwrapped : int32_t {
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
  constexpr operator __Guid_GuidStyles_Unwrapped() const noexcept {
    return static_cast<__Guid_GuidStyles_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Guid_GuidStyles();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Guid_GuidStyles(int32_t value__) noexcept;

  /// @brief Field AllowBraces value: I32(2)
  static ::System::Guid_GuidStyles const AllowBraces;

  /// @brief Field AllowDashes value: I32(4)
  static ::System::Guid_GuidStyles const AllowDashes;

  /// @brief Field AllowHexPrefix value: I32(8)
  static ::System::Guid_GuidStyles const AllowHexPrefix;

  /// @brief Field AllowParenthesis value: I32(1)
  static ::System::Guid_GuidStyles const AllowParenthesis;

  /// @brief Field Any value: I32(15)
  static ::System::Guid_GuidStyles const Any;

  /// @brief Field BraceFormat value: I32(96)
  static ::System::Guid_GuidStyles const BraceFormat;

  /// @brief Field DigitFormat value: I32(64)
  static ::System::Guid_GuidStyles const DigitFormat;

  /// @brief Field HexFormat value: I32(160)
  static ::System::Guid_GuidStyles const HexFormat;

  /// @brief Field None value: I32(0)
  static ::System::Guid_GuidStyles const None;

  /// @brief Field NumberFormat value: I32(0)
  static ::System::Guid_GuidStyles const NumberFormat;

  /// @brief Field ParenthesisFormat value: I32(80)
  static ::System::Guid_GuidStyles const ParenthesisFormat;

  /// @brief Field RequireBraces value: I32(32)
  static ::System::Guid_GuidStyles const RequireBraces;

  /// @brief Field RequireDashes value: I32(64)
  static ::System::Guid_GuidStyles const RequireDashes;

  /// @brief Field RequireHexPrefix value: I32(128)
  static ::System::Guid_GuidStyles const RequireHexPrefix;

  /// @brief Field RequireParenthesis value: I32(16)
  static ::System::Guid_GuidStyles const RequireParenthesis;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2404 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Guid_GuidStyles, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Guid_GuidStyles, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Guid/GuidParseThrowStyle
struct CORDL_TYPE Guid_GuidParseThrowStyle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Guid_GuidParseThrowStyle_Unwrapped
  enum struct __Guid_GuidParseThrowStyle_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_All = static_cast<int32_t>(0x1),
    __E_AllButOverflow = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Guid_GuidParseThrowStyle_Unwrapped() const noexcept {
    return static_cast<__Guid_GuidParseThrowStyle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Guid_GuidParseThrowStyle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Guid_GuidParseThrowStyle(int32_t value__) noexcept;

  /// @brief Field All value: I32(1)
  static ::System::Guid_GuidParseThrowStyle const All;

  /// @brief Field AllButOverflow value: I32(2)
  static ::System::Guid_GuidParseThrowStyle const AllButOverflow;

  /// @brief Field None value: I32(0)
  static ::System::Guid_GuidParseThrowStyle const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Guid_GuidParseThrowStyle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Guid_GuidParseThrowStyle, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Guid/ParseFailureKind
struct CORDL_TYPE Guid_ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Guid_ParseFailureKind_Unwrapped
  enum struct __Guid_ParseFailureKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ArgumentNull = static_cast<int32_t>(0x1),
    __E_Format = static_cast<int32_t>(0x2),
    __E_FormatWithParameter = static_cast<int32_t>(0x3),
    __E_NativeException = static_cast<int32_t>(0x4),
    __E_FormatWithInnerException = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Guid_ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<__Guid_ParseFailureKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Guid_ParseFailureKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Guid_ParseFailureKind(int32_t value__) noexcept;

  /// @brief Field ArgumentNull value: I32(1)
  static ::System::Guid_ParseFailureKind const ArgumentNull;

  /// @brief Field Format value: I32(2)
  static ::System::Guid_ParseFailureKind const Format;

  /// @brief Field FormatWithInnerException value: I32(5)
  static ::System::Guid_ParseFailureKind const FormatWithInnerException;

  /// @brief Field FormatWithParameter value: I32(3)
  static ::System::Guid_ParseFailureKind const FormatWithParameter;

  /// @brief Field NativeException value: I32(4)
  static ::System::Guid_ParseFailureKind const NativeException;

  /// @brief Field None value: I32(0)
  static ::System::Guid_ParseFailureKind const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Guid_ParseFailureKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Guid_ParseFailureKind, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies System.IComparable, System.IComparable`1<T>, System.IEquatable`1<T>, System.IFormattable, System.ISpanFormattable
namespace System {
// Is value type: true
// CS Name: System.Guid
struct CORDL_TYPE Guid {
public:
  // Declarations
  using GuidParseThrowStyle = ::System::Guid_GuidParseThrowStyle;

  using GuidResult = ::System::Guid_GuidResult;

  using GuidStyles = ::System::Guid_GuidStyles;

  using ParseFailureKind = ::System::Guid_ParseFailureKind;

  /// @brief Field Empty, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Guid Empty;

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

  /// @brief Method CompareTo, addr 0x3de1c44, size 0xe4, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Guid value);

  /// @brief Method CompareTo, addr 0x3de1abc, size 0x188, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method EatAllWhitespace, addr 0x3de0ec0, size 0x238, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> EatAllWhitespace(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method Equals, addr 0x3de1a68, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::System::Guid g);

  /// @brief Method Equals, addr 0x3de19c0, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x3de19a8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetResult, addr 0x3de1aac, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetResult(uint32_t me, uint32_t them);

  /// @brief Method HexToChar, addr 0x3de1da4, size 0x1c, virtual false, abstract: false, final false
  static inline char16_t HexToChar(int32_t a);

  /// @brief Method HexsToChars, addr 0x3de1dc0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t HexsToChars(::cordl_internals::Ptr<char16_t> guidChars, int32_t a, int32_t b);

  /// @brief Method HexsToCharsHexOutput, addr 0x3de1e3c, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t HexsToCharsHexOutput(::cordl_internals::Ptr<char16_t> guidChars, int32_t a, int32_t b);

  /// @brief Method IsHexPrefix, addr 0x3de10f8, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsHexPrefix(::System::ReadOnlySpan_1<char16_t> str, int32_t i);

  /// @brief Method NewGuid, addr 0x3ddf644, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Guid NewGuid();

  /// @brief Method Parse, addr 0x3ddfe58, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Guid Parse(::StringW input);

  /// @brief Method Parse, addr 0x3ddfeec, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Guid Parse(::System::ReadOnlySpan_1<char16_t> input);

  /// @brief Method StringToInt, addr 0x3de1390, size 0x1f0, virtual false, abstract: false, final false
  static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t> str, ::ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ::ByRef<int32_t> result,
                                 ::ByRef<::System::Guid_GuidResult> parseResult);

  /// @brief Method StringToInt, addr 0x3de11d0, size 0x2c, virtual false, abstract: false, final false
  static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ::ByRef<int32_t> result, ::ByRef<::System::Guid_GuidResult> parseResult);

  /// @brief Method StringToLong, addr 0x3de1240, size 0x150, virtual false, abstract: false, final false
  static inline bool StringToLong(::System::ReadOnlySpan_1<char16_t> str, ::ByRef<int32_t> parsePos, int32_t flags, ::ByRef<int64_t> result, ::ByRef<::System::Guid_GuidResult> parseResult);

  /// @brief Method StringToShort, addr 0x3de1580, size 0x34, virtual false, abstract: false, final false
  static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t> str, ::ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ::ByRef<int16_t> result,
                                   ::ByRef<::System::Guid_GuidResult> parseResult);

  /// @brief Method StringToShort, addr 0x3de11fc, size 0x44, virtual false, abstract: false, final false
  static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ::ByRef<int16_t> result, ::ByRef<::System::Guid_GuidResult> parseResult);

  /// @brief Method System.ISpanFormattable.TryFormat, addr 0x3de2314, size 0x4, virtual true, abstract: false, final true
  inline bool System_ISpanFormattable_TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method ToByteArray, addr 0x3de16d4, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToString, addr 0x3de1768, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3de1da0, size 0x4, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x3de17b0, size 0x1f8, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x3de1ed8, size 0x43c, virtual false, abstract: false, final false
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format);

  /// @brief Method TryParse, addr 0x3ddff50, size 0x8c, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::ByRef<::System::Guid> result);

  /// @brief Method TryParse, addr 0x3ddffdc, size 0x4c, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> input, ::ByRef<::System::Guid> result);

  /// @brief Method TryParseExact, addr 0x3de0028, size 0xc4, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::StringW format, ::ByRef<::System::Guid> result);

  /// @brief Method TryParseExact, addr 0x3de00ec, size 0x14c, virtual false, abstract: false, final false
  static inline bool TryParseExact(::System::ReadOnlySpan_1<char16_t> input, ::System::ReadOnlySpan_1<char16_t> format, ::ByRef<::System::Guid> result);

  /// @brief Method TryParseGuid, addr 0x3ddfaa0, size 0x240, virtual false, abstract: false, final false
  static inline bool TryParseGuid(::System::ReadOnlySpan_1<char16_t> guidString, ::System::Guid_GuidStyles flags, ::ByRef<::System::Guid_GuidResult> result);

  /// @brief Method TryParseGuidWithDashes, addr 0x3de0258, size 0x2e8, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithDashes(::System::ReadOnlySpan_1<char16_t> guidString, ::ByRef<::System::Guid_GuidResult> result);

  /// @brief Method TryParseGuidWithHexPrefix, addr 0x3de0540, size 0x63c, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithHexPrefix(::System::ReadOnlySpan_1<char16_t> guidString, ::ByRef<::System::Guid_GuidResult> result);

  /// @brief Method TryParseGuidWithNoStyle, addr 0x3de0b7c, size 0x304, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithNoStyle(::System::ReadOnlySpan_1<char16_t> guidString, ::ByRef<::System::Guid_GuidResult> result);

  /// @brief Method WriteByteHelper, addr 0x3de15c4, size 0x110, virtual false, abstract: false, final false
  inline void WriteByteHelper(::System::Span_1<uint8_t> destination);

  /// @brief Method .ctor, addr 0x3ddf848, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int16_t b, int16_t c, ::ArrayW<uint8_t, ::Array<uint8_t>*> d);

  /// @brief Method .ctor, addr 0x3ddf97c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);

  /// @brief Method .ctor, addr 0x3ddf690, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method .ctor, addr 0x3ddf724, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> b);

  /// @brief Method .ctor, addr 0x3ddf9bc, size 0xe4, virtual false, abstract: false, final false
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

  /// @brief Method op_Equality, addr 0x3de1d28, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Guid a, ::System::Guid b);

  /// @brief Method op_Inequality, addr 0x3de1d64, size 0x3c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2408 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::System::Guid, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.Guid, System.Guid::GuidParseThrowStyle, System.Guid::ParseFailureKind
namespace System {
// Is value type: true
// CS Name: System.Guid/GuidResult
struct CORDL_TYPE Guid_GuidResult {
public:
  // Declarations
  /// @brief Method GetGuidParseException, addr 0x3ddfce0, size 0x178, virtual false, abstract: false, final false
  inline ::System::Exception* GetGuidParseException();

  /// @brief Method Init, addr 0x3de2318, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::Guid_GuidParseThrowStyle canThrow);

  /// @brief Method SetFailure, addr 0x3de0248, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::Guid_ParseFailureKind failure, ::StringW failureMessageID);

  /// @brief Method SetFailure, addr 0x3de11c4, size 0xc, virtual false, abstract: false, final false
  inline void SetFailure(::System::Guid_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument);

  /// @brief Method SetFailure, addr 0x3de0e80, size 0x40, virtual false, abstract: false, final false
  inline void SetFailure(::System::Guid_ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName,
                         ::System::Exception* innerException);

  /// @brief Method SetFailure, addr 0x3de15b4, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::Exception* nativeException);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Guid_GuidResult();

  // Ctor Parameters [CppParam { name: "_parsedGuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "_throwStyle", ty: "::System::Guid_GuidParseThrowStyle", modifiers: "",
  // def_value: None }, CppParam { name: "_failure", ty: "::System::Guid_ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "_failureMessageID", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_failureArgumentName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "_innerException", ty: "::System::Exception*", modifiers: "", def_value: None }]
  constexpr Guid_GuidResult(::System::Guid _parsedGuid, ::System::Guid_GuidParseThrowStyle _throwStyle, ::System::Guid_ParseFailureKind _failure, ::StringW _failureMessageID,
                            ::System::Object* _failureMessageFormatArgument, ::StringW _failureArgumentName, ::System::Exception* _innerException) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2407 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field _parsedGuid, offset: 0x0, size: 0x10, def value: None
  ::System::Guid _parsedGuid;

  /// @brief Field _throwStyle, offset: 0x10, size: 0x4, def value: None
  ::System::Guid_GuidParseThrowStyle _throwStyle;

  /// @brief Field _failure, offset: 0x14, size: 0x4, def value: None
  ::System::Guid_ParseFailureKind _failure;

  /// @brief Field _failureMessageID, offset: 0x18, size: 0x8, def value: None
  ::StringW _failureMessageID;

  /// @brief Field _failureMessageFormatArgument, offset: 0x20, size: 0x8, def value: None
  ::System::Object* _failureMessageFormatArgument;

  /// @brief Field _failureArgumentName, offset: 0x28, size: 0x8, def value: None
  ::StringW _failureArgumentName;

  /// @brief Field _innerException, offset: 0x30, size: 0x8, def value: None
  ::System::Exception* _innerException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Guid_GuidResult, _parsedGuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Guid_GuidResult, _throwStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Guid_GuidResult, _failure) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Guid_GuidResult, _failureMessageID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Guid_GuidResult, _failureMessageFormatArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Guid_GuidResult, _failureArgumentName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Guid_GuidResult, _innerException) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Guid_GuidResult, 0x38>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Guid_GuidParseThrowStyle, "System", "Guid/GuidParseThrowStyle");
DEFINE_IL2CPP_ARG_TYPE(::System::Guid_GuidStyles, "System", "Guid/GuidStyles");
DEFINE_IL2CPP_ARG_TYPE(::System::Guid_ParseFailureKind, "System", "Guid/ParseFailureKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Guid, "System", "Guid");
DEFINE_IL2CPP_ARG_TYPE(::System::Guid_GuidResult, "System", "Guid/GuidResult");
