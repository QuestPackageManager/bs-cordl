#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormat)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct __TimeSpanFormat__FormatLiterals;
}
namespace System::Globalization {
struct __TimeSpanFormat__Pattern;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
struct __TimeSpanFormat__Pattern;
}
namespace System::Globalization {
class TimeSpanFormat;
}
namespace System::Globalization {
struct __TimeSpanFormat__FormatLiterals;
}
// Write type traits
MARK_VAL_T(::System::Globalization::__TimeSpanFormat__Pattern);
MARK_REF_PTR_T(::System::Globalization::TimeSpanFormat);
MARK_VAL_T(::System::Globalization::__TimeSpanFormat__FormatLiterals);
// Type: ::Pattern
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::TimeSpanFormat::Pattern
struct CORDL_TYPE __TimeSpanFormat__Pattern {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimeSpanFormat__Pattern_Unwrapped
  enum struct ____TimeSpanFormat__Pattern_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Minimum = static_cast<int32_t>(0x1),
    __E_Full = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeSpanFormat__Pattern_Unwrapped() const noexcept {
    return static_cast<____TimeSpanFormat__Pattern_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanFormat__Pattern();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimeSpanFormat__Pattern(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Full value: static_cast<int32_t>(0x2)
  static ::System::Globalization::__TimeSpanFormat__Pattern const Full;

  /// @brief Field Minimum value: static_cast<int32_t>(0x1)
  static ::System::Globalization::__TimeSpanFormat__Pattern const Minimum;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Globalization::__TimeSpanFormat__Pattern const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanFormat__Pattern, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__Pattern, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
// Type: ::FormatLiterals
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::TimeSpanFormat::FormatLiterals
struct CORDL_TYPE __TimeSpanFormat__FormatLiterals {
public:
  // Declarations
  __declspec(property(get = get_DayHourSep))::StringW DayHourSep;

  __declspec(property(get = get_End))::StringW End;

  __declspec(property(get = get_HourMinuteSep))::StringW HourMinuteSep;

  __declspec(property(get = get_MinuteSecondSep))::StringW MinuteSecondSep;

  __declspec(property(get = get_SecondFractionSep))::StringW SecondFractionSep;

  __declspec(property(get = get_Start))::StringW Start;

  /// @brief Method Init, addr 0x2649b80, size 0x3f8, virtual false, abstract: false, final false
  inline void Init(::System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths);

  /// @brief Method InitInvariant, addr 0x264a1a0, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Globalization::__TimeSpanFormat__FormatLiterals InitInvariant(bool isNegative);

  /// @brief Method get_DayHourSep, addr 0x264a030, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_DayHourSep();

  /// @brief Method get_End, addr 0x264a0e0, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_End();

  /// @brief Method get_HourMinuteSep, addr 0x264a05c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_HourMinuteSep();

  /// @brief Method get_MinuteSecondSep, addr 0x264a088, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_MinuteSecondSep();

  /// @brief Method get_SecondFractionSep, addr 0x264a0b4, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_SecondFractionSep();

  /// @brief Method get_Start, addr 0x264a008, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_Start();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSpanFormat__FormatLiterals();

  // Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "hh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ss", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_literals", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr __TimeSpanFormat__FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff, ::ArrayW<::StringW, ::Array<::StringW>*> _literals) noexcept;

  /// @brief Field AppCompatLiteral, offset: 0x0, size: 0x8, def value: None
  ::StringW AppCompatLiteral;

  /// @brief Field dd, offset: 0x8, size: 0x4, def value: None
  int32_t dd;

  /// @brief Field hh, offset: 0xc, size: 0x4, def value: None
  int32_t hh;

  /// @brief Field mm, offset: 0x10, size: 0x4, def value: None
  int32_t mm;

  /// @brief Field ss, offset: 0x14, size: 0x4, def value: None
  int32_t ss;

  /// @brief Field ff, offset: 0x18, size: 0x4, def value: None
  int32_t ff;

  /// @brief Field _literals, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> _literals;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, AppCompatLiteral) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, dd) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, hh) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, mm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, ss) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, ff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__TimeSpanFormat__FormatLiterals, _literals) == 0x20, "Offset mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::TimeSpanFormat
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::TimeSpanFormat*
class CORDL_TYPE TimeSpanFormat : public ::System::Object {
public:
  // Declarations
  using FormatLiterals = ::System::Globalization::__TimeSpanFormat__FormatLiterals;

  using Pattern = ::System::Globalization::__TimeSpanFormat__Pattern;

  /// @brief Field NegativeInvariantFormatLiterals, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_NegativeInvariantFormatLiterals,
                             put = setStaticF_NegativeInvariantFormatLiterals))::System::Globalization::__TimeSpanFormat__FormatLiterals NegativeInvariantFormatLiterals;

  /// @brief Field PositiveInvariantFormatLiterals, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_PositiveInvariantFormatLiterals,
                             put = setStaticF_PositiveInvariantFormatLiterals))::System::Globalization::__TimeSpanFormat__FormatLiterals PositiveInvariantFormatLiterals;

  /// @brief Method AppendNonNegativeInt32, addr 0x2648a88, size 0xf8, virtual false, abstract: false, final false
  static inline void AppendNonNegativeInt32(::System::Text::StringBuilder* sb, int32_t n, int32_t digits);

  /// @brief Method Format, addr 0x2648b80, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method FormatCustomized, addr 0x2649488, size 0x6f8, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatCustomized(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                ::System::Text::StringBuilder* result);

  /// @brief Method FormatStandard, addr 0x2648ffc, size 0x48c, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatStandard(::System::TimeSpan value, bool isInvariant, ::System::ReadOnlySpan_1<char16_t> format,
                                                              ::System::Globalization::__TimeSpanFormat__Pattern pattern);

  /// @brief Method FormatToBuilder, addr 0x2648c38, size 0x2a8, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatToBuilder(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryFormat, addr 0x2648ee0, size 0x11c, virtual false, abstract: false, final false
  static inline bool TryFormat(::System::TimeSpan value, ::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                               ::System::IFormatProvider* formatProvider);

  static inline ::System::Globalization::__TimeSpanFormat__FormatLiterals getStaticF_NegativeInvariantFormatLiterals();

  static inline ::System::Globalization::__TimeSpanFormat__FormatLiterals getStaticF_PositiveInvariantFormatLiterals();

  static inline void setStaticF_NegativeInvariantFormatLiterals(::System::Globalization::__TimeSpanFormat__FormatLiterals value);

  static inline void setStaticF_PositiveInvariantFormatLiterals(::System::Globalization::__TimeSpanFormat__FormatLiterals value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanFormat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSpanFormat(TimeSpanFormat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSpanFormat(TimeSpanFormat const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanFormat, 0x10>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanFormat__Pattern, "System.Globalization", "TimeSpanFormat/Pattern");
NEED_NO_BOX(::System::Globalization::TimeSpanFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__TimeSpanFormat__FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
