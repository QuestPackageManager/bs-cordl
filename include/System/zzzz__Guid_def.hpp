#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
struct __Guid__ParseFailureKind;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class IFormattable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct __Guid__GuidStyles;
}
namespace System {
struct __Guid__GuidParseThrowStyle;
}
namespace System {
struct __Guid__GuidResult;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IComparable;
}
namespace System {
class Exception;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2402))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Guid__GuidStyles(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__GuidStyles();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Guid__GuidStyles const None;

  /// @brief Field AllowParenthesis value: static_cast<int32_t>(0x1)
  static ::System::__Guid__GuidStyles const AllowParenthesis;

  /// @brief Field AllowBraces value: static_cast<int32_t>(0x2)
  static ::System::__Guid__GuidStyles const AllowBraces;

  /// @brief Field AllowDashes value: static_cast<int32_t>(0x4)
  static ::System::__Guid__GuidStyles const AllowDashes;

  /// @brief Field AllowHexPrefix value: static_cast<int32_t>(0x8)
  static ::System::__Guid__GuidStyles const AllowHexPrefix;

  /// @brief Field RequireParenthesis value: static_cast<int32_t>(0x10)
  static ::System::__Guid__GuidStyles const RequireParenthesis;

  /// @brief Field RequireBraces value: static_cast<int32_t>(0x20)
  static ::System::__Guid__GuidStyles const RequireBraces;

  /// @brief Field RequireDashes value: static_cast<int32_t>(0x40)
  static ::System::__Guid__GuidStyles const RequireDashes;

  /// @brief Field RequireHexPrefix value: static_cast<int32_t>(0x80)
  static ::System::__Guid__GuidStyles const RequireHexPrefix;

  /// @brief Field HexFormat value: static_cast<int32_t>(0xa0)
  static ::System::__Guid__GuidStyles const HexFormat;

  /// @brief Field NumberFormat value: static_cast<int32_t>(0x0)
  static ::System::__Guid__GuidStyles const NumberFormat;

  /// @brief Field DigitFormat value: static_cast<int32_t>(0x40)
  static ::System::__Guid__GuidStyles const DigitFormat;

  /// @brief Field BraceFormat value: static_cast<int32_t>(0x60)
  static ::System::__Guid__GuidStyles const BraceFormat;

  /// @brief Field ParenthesisFormat value: static_cast<int32_t>(0x50)
  static ::System::__Guid__GuidStyles const ParenthesisFormat;

  /// @brief Field Any value: static_cast<int32_t>(0xf)
  static ::System::__Guid__GuidStyles const Any;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2403))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Guid__GuidParseThrowStyle(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__GuidParseThrowStyle();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Guid__GuidParseThrowStyle const None;

  /// @brief Field All value: static_cast<int32_t>(0x1)
  static ::System::__Guid__GuidParseThrowStyle const All;

  /// @brief Field AllButOverflow value: static_cast<int32_t>(0x2)
  static ::System::__Guid__GuidParseThrowStyle const AllButOverflow;

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2404))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Guid__ParseFailureKind(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__ParseFailureKind();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Guid__ParseFailureKind const None;

  /// @brief Field ArgumentNull value: static_cast<int32_t>(0x1)
  static ::System::__Guid__ParseFailureKind const ArgumentNull;

  /// @brief Field Format value: static_cast<int32_t>(0x2)
  static ::System::__Guid__ParseFailureKind const Format;

  /// @brief Field FormatWithParameter value: static_cast<int32_t>(0x3)
  static ::System::__Guid__ParseFailureKind const FormatWithParameter;

  /// @brief Field NativeException value: static_cast<int32_t>(0x4)
  static ::System::__Guid__ParseFailureKind const NativeException;

  /// @brief Field FormatWithInnerException value: static_cast<int32_t>(0x5)
  static ::System::__Guid__ParseFailureKind const FormatWithInnerException;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2464)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2464), inst: 292 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2406))
// CS Name: ::System::Guid
struct CORDL_TYPE Guid {
public:
  // Declarations
  using GuidResult = ::System::__Guid__GuidResult;

  using ParseFailureKind = ::System::__Guid__ParseFailureKind;

  using GuidParseThrowStyle = ::System::__Guid__GuidParseThrowStyle;

  using GuidStyles = ::System::__Guid__GuidStyles;

  /// @brief Field Empty, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Guid Empty;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::Guid>"
  constexpr operator ::System::IComparable_1<::System::Guid>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
  constexpr operator ::System::IEquatable_1<::System::Guid>*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  static inline void setStaticF_Empty(::System::Guid value);

  static inline ::System::Guid getStaticF_Empty();

  /// @brief Method NewGuid, addr 0x25a5a60, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Guid NewGuid();

  /// @brief Method .ctor, addr 0x25a5aac, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method .ctor, addr 0x25a5b44, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::ReadOnlySpan_1<uint8_t> b);

  /// @brief Method .ctor, addr 0x25a5c6c, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int16_t b, int16_t c, ::ArrayW<uint8_t, ::Array<uint8_t>*> d);

  /// @brief Method .ctor, addr 0x25a5da8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);

  /// @brief Method .ctor, addr 0x25a5de8, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::StringW g);

  /// @brief Method Parse, addr 0x25a62a0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Guid Parse(::StringW input);

  /// @brief Method Parse, addr 0x25a6338, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Guid Parse(::System::ReadOnlySpan_1<char16_t> input);

  /// @brief Method TryParse, addr 0x25a639c, size 0x90, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Guid> result);

  /// @brief Method TryParse, addr 0x25a642c, size 0x50, virtual false, abstract: false, final false
  static inline bool TryParse(::System::ReadOnlySpan_1<char16_t> input, ByRef<::System::Guid> result);

  /// @brief Method TryParseGuid, addr 0x25a5edc, size 0x248, virtual false, abstract: false, final false
  static inline bool TryParseGuid(::System::ReadOnlySpan_1<char16_t> guidString, ::System::__Guid__GuidStyles flags, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method TryParseGuidWithHexPrefix, addr 0x25a6760, size 0x674, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithHexPrefix(::System::ReadOnlySpan_1<char16_t> guidString, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method TryParseGuidWithNoStyle, addr 0x25a6dd4, size 0x2ec, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithNoStyle(::System::ReadOnlySpan_1<char16_t> guidString, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method TryParseGuidWithDashes, addr 0x25a649c, size 0x2c4, virtual false, abstract: false, final false
  static inline bool TryParseGuidWithDashes(::System::ReadOnlySpan_1<char16_t> guidString, ByRef<::System::__Guid__GuidResult> result);

  /// @brief Method StringToShort, addr 0x25a7440, size 0x44, virtual false, abstract: false, final false
  static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ByRef<int16_t> result, ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToShort, addr 0x25a77cc, size 0x34, virtual false, abstract: false, final false
  static inline bool StringToShort(::System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ByRef<int16_t> result,
                                   ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToInt, addr 0x25a7414, size 0x2c, virtual false, abstract: false, final false
  static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t> str, int32_t requiredLength, int32_t flags, ByRef<int32_t> result, ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToInt, addr 0x25a75d8, size 0x1f4, virtual false, abstract: false, final false
  static inline bool StringToInt(::System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t requiredLength, int32_t flags, ByRef<int32_t> result,
                                 ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method StringToLong, addr 0x25a7484, size 0x154, virtual false, abstract: false, final false
  static inline bool StringToLong(::System::ReadOnlySpan_1<char16_t> str, ByRef<int32_t> parsePos, int32_t flags, ByRef<int64_t> result, ByRef<::System::__Guid__GuidResult> parseResult);

  /// @brief Method EatAllWhitespace, addr 0x25a7100, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> EatAllWhitespace(::System::ReadOnlySpan_1<char16_t> str);

  /// @brief Method IsHexPrefix, addr 0x25a733c, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsHexPrefix(::System::ReadOnlySpan_1<char16_t> str, int32_t i);

  /// @brief Method WriteByteHelper, addr 0x25a7810, size 0x110, virtual false, abstract: false, final false
  inline void WriteByteHelper(::System::Span_1<uint8_t> destination);

  /// @brief Method ToByteArray, addr 0x25a7920, size 0x17c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ToByteArray();

  /// @brief Method ToString, addr 0x25a7a9c, size 0x48, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode, addr 0x25a7d00, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x25a7d18, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x25a7dc0, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::System::Guid g);

  /// @brief Method GetResult, addr 0x25a7e04, size 0x10, virtual false, abstract: false, final false
  inline int32_t GetResult(uint32_t me, uint32_t them);

  /// @brief Method CompareTo, addr 0x25a7e14, size 0x18c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x25a7fa0, size 0xdc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Guid value);

  /// @brief Method op_Equality, addr 0x25a807c, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Guid a, ::System::Guid b);

  /// @brief Method op_Inequality, addr 0x25a80bc, size 0x40, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Guid a, ::System::Guid b);

  /// @brief Method ToString, addr 0x25a80fc, size 0x4, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method HexToChar, addr 0x25a8100, size 0x1c, virtual false, abstract: false, final false
  static inline char16_t HexToChar(int32_t a);

  /// @brief Method HexsToChars, addr 0x25a811c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t HexsToChars(::cordl_internals::Ptr<char16_t> guidChars, int32_t a, int32_t b);

  /// @brief Method HexsToCharsHexOutput, addr 0x25a8198, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t HexsToCharsHexOutput(::cordl_internals::Ptr<char16_t> guidChars, int32_t a, int32_t b);

  /// @brief Method ToString, addr 0x25a7ae4, size 0x21c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x25a8234, size 0x424, virtual false, abstract: false, final false
  /// @param format: ::System::ReadOnlySpan_1<char16_t> (default: {})
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format = {});

  /// @brief Method System.ISpanFormattable.TryFormat, addr 0x25a8658, size 0x4, virtual true, abstract: false, final true
  inline bool System_ISpanFormattable_TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  // Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "_c", ty:
  // "int16_t", modifiers: "", def_value: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_h", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_k", ty:
  // "uint8_t", modifiers: "", def_value: None }]
  constexpr Guid(int32_t _a, int16_t _b, int16_t _c, uint8_t _d, uint8_t _e, uint8_t _f, uint8_t _g, uint8_t _h, uint8_t _i, uint8_t _j, uint8_t _k) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Guid();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406)), TypeDefinitionIndex(TypeDefinitionIndex(2403)), TypeDefinitionIndex(TypeDefinitionIndex(2404))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2405))
// CS Name: ::Guid::GuidResult
struct CORDL_TYPE __Guid__GuidResult {
public:
  // Declarations
  /// @brief Method Init, addr 0x25a865c, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::__Guid__GuidParseThrowStyle canThrow);

  /// @brief Method SetFailure, addr 0x25a7800, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::Exception* nativeException);

  /// @brief Method SetFailure, addr 0x25a648c, size 0x10, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Guid__ParseFailureKind failure, ::StringW failureMessageID);

  /// @brief Method SetFailure, addr 0x25a7408, size 0xc, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Guid__ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument);

  /// @brief Method SetFailure, addr 0x25a70c0, size 0x40, virtual false, abstract: false, final false
  inline void SetFailure(::System::__Guid__ParseFailureKind failure, ::StringW failureMessageID, ::System::Object* failureMessageFormatArgument, ::StringW failureArgumentName,
                         ::System::Exception* innerException);

  /// @brief Method GetGuidParseException, addr 0x25a6124, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Exception* GetGuidParseException();

  // Ctor Parameters [CppParam { name: "_parsedGuid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "_throwStyle", ty: "::System::__Guid__GuidParseThrowStyle", modifiers:
  // "", def_value: None }, CppParam { name: "_failure", ty: "::System::__Guid__ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "_failureMessageID", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_failureArgumentName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "_innerException", ty: "::System::Exception*", modifiers: "", def_value: None }]
  constexpr __Guid__GuidResult(::System::Guid _parsedGuid, ::System::__Guid__GuidParseThrowStyle _throwStyle, ::System::__Guid__ParseFailureKind _failure, ::StringW _failureMessageID,
                               ::System::Object* _failureMessageFormatArgument, ::StringW _failureArgumentName, ::System::Exception* _innerException) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Guid__GuidResult();

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
