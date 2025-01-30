#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanFormat)
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct TimeSpanFormat_FormatLiterals;
}
namespace System::Globalization {
struct TimeSpanFormat_Pattern;
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
struct TimeSpanFormat_Pattern;
}
namespace System::Globalization {
class TimeSpanFormat;
}
namespace System::Globalization {
struct TimeSpanFormat_FormatLiterals;
}
// Write type traits
MARK_VAL_T(::System::Globalization::TimeSpanFormat_Pattern);
MARK_REF_PTR_T(::System::Globalization::TimeSpanFormat);
MARK_VAL_T(::System::Globalization::TimeSpanFormat_FormatLiterals);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanFormat/Pattern
struct CORDL_TYPE TimeSpanFormat_Pattern {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeSpanFormat_Pattern_Unwrapped
  enum struct __TimeSpanFormat_Pattern_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Minimum = static_cast<int32_t>(0x1),
    __E_Full = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeSpanFormat_Pattern_Unwrapped() const noexcept {
    return static_cast<__TimeSpanFormat_Pattern_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanFormat_Pattern();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeSpanFormat_Pattern(int32_t value__) noexcept;

  /// @brief Field Full value: I32(2)
  static ::System::Globalization::TimeSpanFormat_Pattern const Full;

  /// @brief Field Minimum value: I32(1)
  static ::System::Globalization::TimeSpanFormat_Pattern const Minimum;

  /// @brief Field None value: I32(0)
  static ::System::Globalization::TimeSpanFormat_Pattern const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanFormat_Pattern, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanFormat_Pattern, 0x4>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.TimeSpanFormat/FormatLiterals
struct CORDL_TYPE TimeSpanFormat_FormatLiterals {
public:
  // Declarations
  __declspec(property(get = get_DayHourSep)) ::StringW DayHourSep;

  __declspec(property(get = get_End)) ::StringW End;

  __declspec(property(get = get_HourMinuteSep)) ::StringW HourMinuteSep;

  __declspec(property(get = get_MinuteSecondSep)) ::StringW MinuteSecondSep;

  __declspec(property(get = get_SecondFractionSep)) ::StringW SecondFractionSep;

  __declspec(property(get = get_Start)) ::StringW Start;

  /// @brief Method Init, addr 0x3d96a18, size 0x37c, virtual false, abstract: false, final false
  inline void Init(::System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths);

  /// @brief Method InitInvariant, addr 0x3d968b8, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Globalization::TimeSpanFormat_FormatLiterals InitInvariant(bool isNegative);

  /// @brief Method get_DayHourSep, addr 0x3d967dc, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_DayHourSep();

  /// @brief Method get_End, addr 0x3d9688c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_End();

  /// @brief Method get_HourMinuteSep, addr 0x3d96808, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_HourMinuteSep();

  /// @brief Method get_MinuteSecondSep, addr 0x3d96834, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_MinuteSecondSep();

  /// @brief Method get_SecondFractionSep, addr 0x3d96860, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_SecondFractionSep();

  /// @brief Method get_Start, addr 0x3d967b4, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_Start();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpanFormat_FormatLiterals();

  // Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "hh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ss", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_literals", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr TimeSpanFormat_FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff, ::ArrayW<::StringW, ::Array<::StringW>*> _literals) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, AppCompatLiteral) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, dd) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, hh) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, mm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, ss) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, ff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::TimeSpanFormat_FormatLiterals, _literals) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanFormat_FormatLiterals, 0x28>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.Globalization.TimeSpanFormat::FormatLiterals, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.TimeSpanFormat
class CORDL_TYPE TimeSpanFormat : public ::System::Object {
public:
  // Declarations
  using FormatLiterals = ::System::Globalization::TimeSpanFormat_FormatLiterals;

  using Pattern = ::System::Globalization::TimeSpanFormat_Pattern;

  /// @brief Field NegativeInvariantFormatLiterals, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_NegativeInvariantFormatLiterals,
                      put = setStaticF_NegativeInvariantFormatLiterals)) ::System::Globalization::TimeSpanFormat_FormatLiterals NegativeInvariantFormatLiterals;

  /// @brief Field PositiveInvariantFormatLiterals, offset 0xffffffff, size 0x28
  __declspec(property(get = getStaticF_PositiveInvariantFormatLiterals,
                      put = setStaticF_PositiveInvariantFormatLiterals)) ::System::Globalization::TimeSpanFormat_FormatLiterals PositiveInvariantFormatLiterals;

  /// @brief Method AppendNonNegativeInt32, addr 0x3d952f4, size 0xf8, virtual false, abstract: false, final false
  static inline void AppendNonNegativeInt32(::System::Text::StringBuilder* sb, int32_t n, int32_t digits);

  /// @brief Method Format, addr 0x3d953ec, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW Format(::System::TimeSpan value, ::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method FormatCustomized, addr 0x3d95d90, size 0x728, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatCustomized(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::DateTimeFormatInfo* dtfi,
                                                                ::System::Text::StringBuilder* result);

  /// @brief Method FormatStandard, addr 0x3d9589c, size 0x4f4, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatStandard(::System::TimeSpan value, bool isInvariant, ::System::ReadOnlySpan_1<char16_t> format,
                                                              ::System::Globalization::TimeSpanFormat_Pattern pattern);

  /// @brief Method FormatToBuilder, addr 0x3d954a4, size 0x2d8, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* FormatToBuilder(::System::TimeSpan value, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryFormat, addr 0x3d9577c, size 0x120, virtual false, abstract: false, final false
  static inline bool TryFormat(::System::TimeSpan value, ::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                               ::System::IFormatProvider* formatProvider);

  static inline ::System::Globalization::TimeSpanFormat_FormatLiterals getStaticF_NegativeInvariantFormatLiterals();

  static inline ::System::Globalization::TimeSpanFormat_FormatLiterals getStaticF_PositiveInvariantFormatLiterals();

  static inline void setStaticF_NegativeInvariantFormatLiterals(::System::Globalization::TimeSpanFormat_FormatLiterals value);

  static inline void setStaticF_PositiveInvariantFormatLiterals(::System::Globalization::TimeSpanFormat_FormatLiterals value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TimeSpanFormat, 0x10>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat_Pattern, "System.Globalization", "TimeSpanFormat/Pattern");
NEED_NO_BOX(::System::Globalization::TimeSpanFormat);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat*, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TimeSpanFormat_FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
