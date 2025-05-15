#pragma once
// IWYU pragma private; include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpan)
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
struct TimeSpan;
}
// Write type traits
MARK_VAL_T(::System::TimeSpan);
// Dependencies System.IComparable, System.IComparable`1<T>, System.IEquatable`1<T>, System.IFormattable, System.ISpanFormattable
namespace System {
// Is value type: true
// CS Name: System.TimeSpan
struct CORDL_TYPE TimeSpan {
public:
  // Declarations
  __declspec(property(get = get_Days)) int32_t Days;

  __declspec(property(get = get_Hours)) int32_t Hours;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::TimeSpan MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::TimeSpan MinValue;

  __declspec(property(get = get_Minutes)) int32_t Minutes;

  __declspec(property(get = get_Seconds)) int32_t Seconds;

  __declspec(property(get = get_Ticks)) int64_t Ticks;

  __declspec(property(get = get_TotalDays)) double_t TotalDays;

  __declspec(property(get = get_TotalHours)) double_t TotalHours;

  __declspec(property(get = get_TotalMilliseconds)) double_t TotalMilliseconds;

  __declspec(property(get = get_TotalMinutes)) double_t TotalMinutes;

  __declspec(property(get = get_TotalSeconds)) double_t TotalSeconds;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::TimeSpan Zero;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::TimeSpan>"
  constexpr operator ::System::IComparable_1<::System::TimeSpan>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::TimeSpan>"
  constexpr operator ::System::IEquatable_1<::System::TimeSpan>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Method Add, addr 0x3e02304, size 0x68, virtual false, abstract: false, final false
  inline ::System::TimeSpan Add(::System::TimeSpan ts);

  /// @brief Method Compare, addr 0x3e0236c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method CompareTo, addr 0x3e02384, size 0xc4, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x3e02448, size 0x1c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::TimeSpan value);

  /// @brief Method Duration, addr 0x3e025bc, size 0xb4, virtual false, abstract: false, final false
  inline ::System::TimeSpan Duration();

  /// @brief Method Equals, addr 0x3e026e8, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeSpan obj);

  /// @brief Method Equals, addr 0x3e02670, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method FromDays, addr 0x3e02464, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromDays(double_t value);

  /// @brief Method FromHours, addr 0x3e02704, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromHours(double_t value);

  /// @brief Method FromMilliseconds, addr 0x3e02768, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromMilliseconds(double_t value);

  /// @brief Method FromMinutes, addr 0x3e027c8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromMinutes(double_t value);

  /// @brief Method FromSeconds, addr 0x3e028d8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromSeconds(double_t value);

  /// @brief Method FromTicks, addr 0x3e029a0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromTicks(int64_t value);

  /// @brief Method GetHashCode, addr 0x3e026f8, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Interval, addr 0x3e024c8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Interval(double_t value, int32_t scale);

  /// @brief Method Negate, addr 0x3e02828, size 0xb0, virtual false, abstract: false, final false
  inline ::System::TimeSpan Negate();

  /// @brief Method Parse, addr 0x3e02a00, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::StringW input, ::System::IFormatProvider* formatProvider);

  /// @brief Method Parse, addr 0x3e029a4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::StringW s);

  /// @brief Method Subtract, addr 0x3e02938, size 0x68, virtual false, abstract: false, final false
  inline ::System::TimeSpan Subtract(::System::TimeSpan ts);

  /// @brief Method TimeToTicks, addr 0x3e02010, size 0x98, virtual false, abstract: false, final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);

  /// @brief Method ToString, addr 0x3e02b34, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3e02b98, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x3e02c08, size 0x74, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryFormat, addr 0x3e02c7c, size 0xa4, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryParseExact, addr 0x3e02a60, size 0xd4, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::ByRef<::System::TimeSpan> result);

  /// @brief Method .ctor, addr 0x3e020a8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds);

  /// @brief Method .ctor, addr 0x3e01f90, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t hours, int32_t minutes, int32_t seconds);

  /// @brief Method .ctor, addr 0x3e01f88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks);

  static inline ::System::TimeSpan getStaticF_MaxValue();

  static inline ::System::TimeSpan getStaticF_MinValue();

  static inline ::System::TimeSpan getStaticF_Zero();

  /// @brief Method get_Days, addr 0x3e0216c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Days();

  /// @brief Method get_Hours, addr 0x3e02198, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_Hours();

  /// @brief Method get_Minutes, addr 0x3e021dc, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Minutes();

  /// @brief Method get_Seconds, addr 0x3e02224, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_Seconds();

  /// @brief Method get_Ticks, addr 0x3e02164, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Ticks();

  /// @brief Method get_TotalDays, addr 0x3e02270, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalDays();

  /// @brief Method get_TotalHours, addr 0x3e02288, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalHours();

  /// @brief Method get_TotalMilliseconds, addr 0x3e022a0, size 0x34, virtual false, abstract: false, final false
  inline double_t get_TotalMilliseconds();

  /// @brief Method get_TotalMinutes, addr 0x3e022d4, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalMinutes();

  /// @brief Method get_TotalSeconds, addr 0x3e022ec, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalSeconds();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::TimeSpan>"
  constexpr ::System::IComparable_1<::System::TimeSpan>* i___System__IComparable_1___System__TimeSpan_();

  /// @brief Convert to "::System::IEquatable_1<::System::TimeSpan>"
  constexpr ::System::IEquatable_1<::System::TimeSpan>* i___System__IEquatable_1___System__TimeSpan_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  /// @brief Method op_Addition, addr 0x3e02e34, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Addition(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Equality, addr 0x3e02e9c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_GreaterThan, addr 0x3e02ecc, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3e02ed8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Inequality, addr 0x3e02ea8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_LessThan, addr 0x3e02eb4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_LessThanOrEqual, addr 0x3e02ec0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Subtraction, addr 0x3e02dcc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Subtraction(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_UnaryNegation, addr 0x3e02d20, size 0xac, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_UnaryNegation(::System::TimeSpan t);

  static inline void setStaticF_MaxValue(::System::TimeSpan value);

  static inline void setStaticF_MinValue(::System::TimeSpan value);

  static inline void setStaticF_Zero(::System::TimeSpan value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpan();

  // Ctor Parameters [CppParam { name: "_ticks", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr TimeSpan(int64_t _ticks) noexcept;

  /// @brief Field DaysPerTick offset 0xffffffff size 0x8
  static constexpr double_t DaysPerTick{ static_cast<double_t>(0.0) };

  /// @brief Field HoursPerTick offset 0xffffffff size 0x8
  static constexpr double_t HoursPerTick{ static_cast<double_t>(0.0) };

  /// @brief Field MaxMilliSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MaxMilliSeconds{ static_cast<int64_t>(0x346dc5d638865) };

  /// @brief Field MaxSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MaxSeconds{ static_cast<int64_t>(0xd6bf94d5e5) };

  /// @brief Field MillisPerDay offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerDay{ static_cast<int32_t>(0x5265c00) };

  /// @brief Field MillisPerHour offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerHour{ static_cast<int32_t>(0x36ee80) };

  /// @brief Field MillisPerMinute offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerMinute{ static_cast<int32_t>(0xea60) };

  /// @brief Field MillisPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerSecond{ static_cast<int32_t>(0x3e8) };

  /// @brief Field MillisecondsPerTick offset 0xffffffff size 0x8
  static constexpr double_t MillisecondsPerTick{ static_cast<double_t>(0.0) };

  /// @brief Field MinMilliSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MinMilliSeconds{ static_cast<int64_t>(0xfffcb923a29c779b) };

  /// @brief Field MinSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MinSeconds{ static_cast<int64_t>(0xffffff29406b2a1b) };

  /// @brief Field MinutesPerTick offset 0xffffffff size 0x8
  static constexpr double_t MinutesPerTick{ static_cast<double_t>(0.0) };

  /// @brief Field SecondsPerTick offset 0xffffffff size 0x8
  static constexpr double_t SecondsPerTick{ static_cast<double_t>(0.0) };

  /// @brief Field TicksPerDay offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerDay{ static_cast<int64_t>(0xc92a69c000) };

  /// @brief Field TicksPerHour offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerHour{ static_cast<int64_t>(0x861c46800) };

  /// @brief Field TicksPerMillisecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMillisecond{ static_cast<int64_t>(0x2710) };

  /// @brief Field TicksPerMinute offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMinute{ static_cast<int64_t>(0x23c34600) };

  /// @brief Field TicksPerSecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerSecond{ static_cast<int64_t>(0x989680) };

  /// @brief Field TicksPerTenthSecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerTenthSecond{ static_cast<int64_t>(0xf4240) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2483 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _ticks, offset: 0x0, size: 0x8, def value: None
  int64_t _ticks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeSpan, _ticks) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeSpan, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TimeSpan, "System", "TimeSpan");
