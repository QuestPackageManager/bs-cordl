#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpan)
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
// Forward declare root types
namespace System {
struct TimeSpan;
}
// Write type traits
MARK_VAL_T(::System::TimeSpan);
// Type: System::TimeSpan
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2484))
// CS Name: ::System::TimeSpan
struct CORDL_TYPE TimeSpan {
public:
  // Declarations
  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::System::TimeSpan Zero;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue))::System::TimeSpan MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue))::System::TimeSpan MinValue;

  __declspec(property(get = get_Ticks)) int64_t Ticks;

  __declspec(property(get = get_Hours)) int32_t Hours;

  __declspec(property(get = get_Minutes)) int32_t Minutes;

  __declspec(property(get = get_Seconds)) int32_t Seconds;

  __declspec(property(get = get_TotalDays)) double_t TotalDays;

  __declspec(property(get = get_TotalHours)) double_t TotalHours;

  __declspec(property(get = get_TotalMilliseconds)) double_t TotalMilliseconds;

  __declspec(property(get = get_TotalMinutes)) double_t TotalMinutes;

  __declspec(property(get = get_TotalSeconds)) double_t TotalSeconds;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert operator to "::System::IComparable_1<::System::TimeSpan>"
  constexpr operator ::System::IComparable_1<::System::TimeSpan>*();

  /// @brief Convert to "::System::IComparable_1<::System::TimeSpan>"
  constexpr ::System::IComparable_1<::System::TimeSpan>* i___System__IComparable_1___System__TimeSpan_();

  /// @brief Convert operator to "::System::IEquatable_1<::System::TimeSpan>"
  constexpr operator ::System::IEquatable_1<::System::TimeSpan>*();

  /// @brief Convert to "::System::IEquatable_1<::System::TimeSpan>"
  constexpr ::System::IEquatable_1<::System::TimeSpan>* i___System__IEquatable_1___System__TimeSpan_();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  static inline void setStaticF_Zero(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_Zero();

  static inline void setStaticF_MaxValue(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_MaxValue();

  static inline void setStaticF_MinValue(::System::TimeSpan value);

  static inline ::System::TimeSpan getStaticF_MinValue();

  /// @brief Method .ctor, addr 0x25c5f74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks);

  /// @brief Method .ctor, addr 0x25c5f7c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t hours, int32_t minutes, int32_t seconds);

  /// @brief Method .ctor, addr 0x25c6098, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds);

  /// @brief Method get_Ticks, addr 0x25c6158, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Ticks();

  /// @brief Method get_Hours, addr 0x25c6160, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Hours();

  /// @brief Method get_Minutes, addr 0x25c61a8, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Minutes();

  /// @brief Method get_Seconds, addr 0x25c61f0, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_Seconds();

  /// @brief Method get_TotalDays, addr 0x25c623c, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalDays();

  /// @brief Method get_TotalHours, addr 0x25c6254, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalHours();

  /// @brief Method get_TotalMilliseconds, addr 0x25c626c, size 0x34, virtual false, abstract: false, final false
  inline double_t get_TotalMilliseconds();

  /// @brief Method get_TotalMinutes, addr 0x25c62a0, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalMinutes();

  /// @brief Method get_TotalSeconds, addr 0x25c62b8, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalSeconds();

  /// @brief Method Add, addr 0x25c62d0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::TimeSpan Add(::System::TimeSpan ts);

  /// @brief Method Compare, addr 0x25c633c, size 0x18, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method CompareTo, addr 0x25c6354, size 0xc8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x25c641c, size 0x1c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::TimeSpan value);

  /// @brief Method FromDays, addr 0x25c6438, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromDays(double_t value);

  /// @brief Method Duration, addr 0x25c65e8, size 0xbc, virtual false, abstract: false, final false
  inline ::System::TimeSpan Duration();

  /// @brief Method Equals, addr 0x25c66a4, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method Equals, addr 0x25c671c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeSpan obj);

  /// @brief Method GetHashCode, addr 0x25c672c, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method FromHours, addr 0x25c6738, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromHours(double_t value);

  /// @brief Method Interval, addr 0x25c649c, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Interval(double_t value, int32_t scale);

  /// @brief Method FromMilliseconds, addr 0x25c679c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromMilliseconds(double_t value);

  /// @brief Method FromMinutes, addr 0x25c67fc, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromMinutes(double_t value);

  /// @brief Method Negate, addr 0x25c685c, size 0xb8, virtual false, abstract: false, final false
  inline ::System::TimeSpan Negate();

  /// @brief Method FromSeconds, addr 0x25c6914, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromSeconds(double_t value);

  /// @brief Method Subtract, addr 0x25c6974, size 0x6c, virtual false, abstract: false, final false
  inline ::System::TimeSpan Subtract(::System::TimeSpan ts);

  /// @brief Method FromTicks, addr 0x25c69e0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromTicks(int64_t value);

  /// @brief Method TimeToTicks, addr 0x25c5ffc, size 0x9c, virtual false, abstract: false, final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);

  /// @brief Method Parse, addr 0x25c69e4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::StringW s);

  /// @brief Method Parse, addr 0x25c6a40, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::StringW input, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryParseExact, addr 0x25c6aa0, size 0xd4, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ByRef<::System::TimeSpan> result);

  /// @brief Method ToString, addr 0x25c6b74, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x25c6bd8, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x25c6c48, size 0x74, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryFormat, addr 0x25c6cbc, size 0xa4, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider);

  /// @brief Method op_UnaryNegation, addr 0x25c6d60, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_UnaryNegation(::System::TimeSpan t);

  /// @brief Method op_Subtraction, addr 0x25c6e10, size 0x18, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Subtraction(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Addition, addr 0x25c6e28, size 0x18, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Addition(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Equality, addr 0x25c6e40, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Inequality, addr 0x25c6e4c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_LessThan, addr 0x25c6e58, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_LessThanOrEqual, addr 0x25c6e64, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_GreaterThan, addr 0x25c6e70, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x25c6e7c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2);

  // Ctor Parameters [CppParam { name: "_ticks", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr TimeSpan(int64_t _ticks) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpan();

  /// @brief Field _ticks, offset: 0x0, size: 0x8, def value: None
  int64_t _ticks;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field TicksPerMillisecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMillisecond{ static_cast<int64_t>(0x2710) };

  /// @brief Field MillisecondsPerTick offset 0xffffffff size 0x8
  static constexpr double_t MillisecondsPerTick{ 0.0001 };

  /// @brief Field TicksPerSecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerSecond{ static_cast<int64_t>(0x989680) };

  /// @brief Field SecondsPerTick offset 0xffffffff size 0x8
  static constexpr double_t SecondsPerTick{ 0.0000001 };

  /// @brief Field TicksPerMinute offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMinute{ static_cast<int64_t>(0x23c34600) };

  /// @brief Field MinutesPerTick offset 0xffffffff size 0x8
  static constexpr double_t MinutesPerTick{ 0.0000000016666666666666667 };

  /// @brief Field TicksPerHour offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerHour{ static_cast<int64_t>(0x861c46800) };

  /// @brief Field HoursPerTick offset 0xffffffff size 0x8
  static constexpr double_t HoursPerTick{ 0.000000000027777777777777777 };

  /// @brief Field TicksPerDay offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerDay{ static_cast<int64_t>(0xc92a69c000) };

  /// @brief Field DaysPerTick offset 0xffffffff size 0x8
  static constexpr double_t DaysPerTick{ 0.0000000000011574074074074074 };

  /// @brief Field MillisPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerSecond{ static_cast<int32_t>(0x3e8) };

  /// @brief Field MillisPerMinute offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerMinute{ static_cast<int32_t>(0xea60) };

  /// @brief Field MillisPerHour offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerHour{ static_cast<int32_t>(0x36ee80) };

  /// @brief Field MillisPerDay offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerDay{ static_cast<int32_t>(0x5265c00) };

  /// @brief Field MaxSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MaxSeconds{ static_cast<int64_t>(0xd6bf94d5e5) };

  /// @brief Field MinSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MinSeconds{ static_cast<int64_t>(0xffffff29406b2a1b) };

  /// @brief Field MaxMilliSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MaxMilliSeconds{ static_cast<int64_t>(0x346dc5d638865) };

  /// @brief Field MinMilliSeconds offset 0xffffffff size 0x8
  static constexpr int64_t MinMilliSeconds{ static_cast<int64_t>(0xfffcb923a29c779b) };

  /// @brief Field TicksPerTenthSecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerTenthSecond{ static_cast<int64_t>(0xf4240) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeSpan, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::TimeSpan, _ticks) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TimeSpan, "System", "TimeSpan");
