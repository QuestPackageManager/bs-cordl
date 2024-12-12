#pragma once
// IWYU pragma private; include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTime)
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTimeKind;
}
namespace System {
struct DayOfWeek;
}
namespace System {
struct Decimal;
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
namespace System {
struct TimeSpan;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
struct DateTime;
}
// Write type traits
MARK_VAL_T(::System::DateTime);
// Dependencies System.IComparable, System.IComparable`1<T>, System.IConvertible, System.IEquatable`1<T>, System.IFormattable, System.ISpanFormattable, System.Runtime.Serialization.ISerializable
namespace System {
// Is value type: true
// CS Name: System.DateTime
struct CORDL_TYPE DateTime {
public:
  // Declarations
  __declspec(property(get = get_Date)) ::System::DateTime Date;

  __declspec(property(get = get_Day)) int32_t Day;

  __declspec(property(get = get_DayOfWeek)) ::System::DayOfWeek DayOfWeek;

  __declspec(property(get = get_Hour)) int32_t Hour;

  __declspec(property(get = get_InternalKind)) uint64_t InternalKind;

  __declspec(property(get = get_InternalTicks)) int64_t InternalTicks;

  __declspec(property(get = get_Kind)) ::System::DateTimeKind Kind;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::DateTime MaxValue;

  __declspec(property(get = get_Millisecond)) int32_t Millisecond;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::DateTime MinValue;

  __declspec(property(get = get_Minute)) int32_t Minute;

  __declspec(property(get = get_Month)) int32_t Month;

  __declspec(property(get = get_Second)) int32_t Second;

  __declspec(property(get = get_Ticks)) int64_t Ticks;

  __declspec(property(get = get_TimeOfDay)) ::System::TimeSpan TimeOfDay;

  /// @brief Field UnixEpoch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UnixEpoch, put = setStaticF_UnixEpoch)) ::System::DateTime UnixEpoch;

  __declspec(property(get = get_Year)) int32_t Year;

  /// @brief Field s_daysToMonth365, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_daysToMonth365, put = setStaticF_s_daysToMonth365)) ::ArrayW<int32_t, ::Array<int32_t>*> s_daysToMonth365;

  /// @brief Field s_daysToMonth366, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_daysToMonth366, put = setStaticF_s_daysToMonth366)) ::ArrayW<int32_t, ::Array<int32_t>*> s_daysToMonth366;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::DateTime>"
  constexpr operator ::System::IComparable_1<::System::DateTime>*();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::DateTime>"
  constexpr operator ::System::IEquatable_1<::System::DateTime>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Add, addr 0x3dca85c, size 0x64, virtual false, abstract: false, final false
  inline ::System::DateTime Add(::System::TimeSpan value);

  /// @brief Method Add, addr 0x3dca9c8, size 0x128, virtual false, abstract: false, final false
  inline ::System::DateTime Add(double_t value, int32_t scale);

  /// @brief Method AddDays, addr 0x3dcaaf0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::DateTime AddDays(double_t value);

  /// @brief Method AddMilliseconds, addr 0x3dcab5c, size 0x68, virtual false, abstract: false, final false
  inline ::System::DateTime AddMilliseconds(double_t value);

  /// @brief Method AddMonths, addr 0x3dcabc4, size 0x240, virtual false, abstract: false, final false
  inline ::System::DateTime AddMonths(int32_t months);

  /// @brief Method AddSeconds, addr 0x3dcb128, size 0x68, virtual false, abstract: false, final false
  inline ::System::DateTime AddSeconds(double_t value);

  /// @brief Method AddTicks, addr 0x3dca8c0, size 0x108, virtual false, abstract: false, final false
  inline ::System::DateTime AddTicks(int64_t value);

  /// @brief Method AddYears, addr 0x3dcb190, size 0xd0, virtual false, abstract: false, final false
  inline ::System::DateTime AddYears(int32_t value);

  /// @brief Method Compare, addr 0x3dcb260, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method CompareTo, addr 0x3dcb3cc, size 0x68, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::DateTime value);

  /// @brief Method CompareTo, addr 0x3dcb2d8, size 0xf4, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method DateToTicks, addr 0x3dc9ab0, size 0x1b8, virtual false, abstract: false, final false
  static inline int64_t DateToTicks(int32_t year, int32_t month, int32_t day);

  /// @brief Method DaysInMonth, addr 0x3dcaffc, size 0x12c, virtual false, abstract: false, final false
  static inline int32_t DaysInMonth(int32_t year, int32_t month);

  /// @brief Method Equals, addr 0x3dcb5ac, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::System::DateTime value);

  /// @brief Method Equals, addr 0x3dcb4fc, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method FromBinary, addr 0x3dcb618, size 0x268, virtual false, abstract: false, final false
  static inline ::System::DateTime FromBinary(int64_t dateData);

  /// @brief Method FromBinaryRaw, addr 0x3dcb880, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime FromBinaryRaw(int64_t dateData);

  /// @brief Method FromFileTime, addr 0x3dcb904, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::DateTime FromFileTime(int64_t fileTime);

  /// @brief Method FromFileTimeUtc, addr 0x3dcb970, size 0xac, virtual false, abstract: false, final false
  static inline ::System::DateTime FromFileTimeUtc(int64_t fileTime);

  /// @brief Method GetDatePart, addr 0x3dcbc68, size 0x1fc, virtual false, abstract: false, final false
  inline int32_t GetDatePart(int32_t part);

  /// @brief Method GetDatePart, addr 0x3dcae04, size 0x1f8, virtual false, abstract: false, final false
  inline void GetDatePart(::ByRef<int32_t> year, ::ByRef<int32_t> month, ::ByRef<int32_t> day);

  /// @brief Method GetHashCode, addr 0x3dcbf54, size 0x5c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSystemTimeAsFileTime, addr 0x3dce810, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetSystemTimeAsFileTime();

  /// @brief Method GetTypeCode, addr 0x3dcdeb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method IsAmbiguousDaylightSavingTime, addr 0x3dcc038, size 0x60, virtual false, abstract: false, final false
  inline bool IsAmbiguousDaylightSavingTime();

  /// @brief Method IsLeapYear, addr 0x3dcb434, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsLeapYear(int32_t year);

  /// @brief Method Parse, addr 0x3dcc498, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::StringW s);

  /// @brief Method Parse, addr 0x3dcc66c, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x3dcc760, size 0x130, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::StringW s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method ParseExact, addr 0x3dcc890, size 0x164, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ParseExact, addr 0x3dccafc, size 0x198, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style);

  /// @brief Method ParseExact, addr 0x3dccc94, size 0x140, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::StringW s, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style);

  /// @brief Method SpecifyKind, addr 0x3dcbb6c, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SpecifyKind(::System::DateTime value, ::System::DateTimeKind kind);

  /// @brief Method Subtract, addr 0x3dccecc, size 0x6c, virtual false, abstract: false, final false
  inline ::System::TimeSpan Subtract(::System::DateTime value);

  /// @brief Method System.IConvertible.ToBoolean, addr 0x3dcdeb8, size 0x84, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x3dce044, size 0x84, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x3dcdf3c, size 0x84, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x3dce56c, size 0x8, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x3dce4e8, size 0x84, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x3dce464, size 0x84, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x3dce0c8, size 0x84, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x3dce1d0, size 0x84, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x3dce2d8, size 0x84, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x3dcdfc0, size 0x84, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x3dce3e0, size 0x84, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x3dce574, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x3dce14c, size 0x84, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x3dce254, size 0x84, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x3dce35c, size 0x84, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3dcba74, size 0xf8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method TimeToTicks, addr 0x3dc9d14, size 0xd4, virtual false, abstract: false, final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);

  /// @brief Method ToBinaryRaw, addr 0x3dce814, size 0x8, virtual false, abstract: false, final false
  inline int64_t ToBinaryRaw();

  /// @brief Method ToLocalTime, addr 0x3dcba1c, size 0x58, virtual false, abstract: false, final false
  inline ::System::DateTime ToLocalTime();

  /// @brief Method ToLocalTime, addr 0x3dccf38, size 0x1b4, virtual false, abstract: false, final false
  inline ::System::DateTime ToLocalTime(bool throwOnOverflow);

  /// @brief Method ToString, addr 0x3dcd0ec, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3dcd1c4, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x3dcd29c, size 0x70, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x3dcd230, size 0x6c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToUniversalTime, addr 0x3dcd464, size 0x60, virtual false, abstract: false, final false
  inline ::System::DateTime ToUniversalTime();

  /// @brief Method TryCreate, addr 0x3dce620, size 0x1f0, virtual false, abstract: false, final false
  static inline bool TryCreate(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::ByRef<::System::DateTime> result);

  /// @brief Method TryFormat, addr 0x3dcd30c, size 0xa0, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method TryParse, addr 0x3dcd4c4, size 0x144, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles, ::ByRef<::System::DateTime> result);

  /// @brief Method TryParseExact, addr 0x3dcd718, size 0x190, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style, ::ByRef<::System::DateTime> result);

  /// @brief Method .ctor, addr 0x3dc98a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t dateData);

  /// @brief Method .ctor, addr 0x3dca580, size 0x2c4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3dc981c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks);

  /// @brief Method .ctor, addr 0x3dc98b0, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks, ::System::DateTimeKind kind);

  /// @brief Method .ctor, addr 0x3dc9990, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks, ::System::DateTimeKind kind, bool isAmbiguousDst);

  /// @brief Method .ctor, addr 0x3dc9a30, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day);

  /// @brief Method .ctor, addr 0x3dc9c68, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);

  /// @brief Method .ctor, addr 0x3dc9de8, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::System::DateTimeKind kind);

  /// @brief Method .ctor, addr 0x3dc9f00, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);

  /// @brief Method .ctor, addr 0x3dca2f8, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::Globalization::Calendar* calendar);

  /// @brief Method .ctor, addr 0x3dca0d0, size 0x228, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::DateTimeKind kind);

  static inline ::System::DateTime getStaticF_MaxValue();

  static inline ::System::DateTime getStaticF_MinValue();

  static inline ::System::DateTime getStaticF_UnixEpoch();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_daysToMonth365();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_daysToMonth366();

  /// @brief Method get_Date, addr 0x3dcbbe0, size 0x88, virtual false, abstract: false, final false
  inline ::System::DateTime get_Date();

  /// @brief Method get_Day, addr 0x3dcbe64, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Day();

  /// @brief Method get_DayOfWeek, addr 0x3dcbebc, size 0x98, virtual false, abstract: false, final false
  inline ::System::DayOfWeek get_DayOfWeek();

  /// @brief Method get_Hour, addr 0x3dcbfb0, size 0x88, virtual false, abstract: false, final false
  inline int32_t get_Hour();

  /// @brief Method get_InternalKind, addr 0x3dca850, size 0xc, virtual false, abstract: false, final false
  inline uint64_t get_InternalKind();

  /// @brief Method get_InternalTicks, addr 0x3dca844, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_InternalTicks();

  /// @brief Method get_Kind, addr 0x3dc91ac, size 0x74, virtual false, abstract: false, final false
  inline ::System::DateTimeKind get_Kind();

  /// @brief Method get_Millisecond, addr 0x3dcc098, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Millisecond();

  /// @brief Method get_Minute, addr 0x3dcc12c, size 0x88, virtual false, abstract: false, final false
  inline int32_t get_Minute();

  /// @brief Method get_Month, addr 0x3dcc1b4, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Month();

  /// @brief Method get_Now, addr 0x3dcc20c, size 0x120, virtual false, abstract: false, final false
  static inline ::System::DateTime get_Now();

  /// @brief Method get_Second, addr 0x3dcc390, size 0x88, virtual false, abstract: false, final false
  inline int32_t get_Second();

  /// @brief Method get_Ticks, addr 0x3dca528, size 0x58, virtual false, abstract: false, final false
  inline int64_t get_Ticks();

  /// @brief Method get_TimeOfDay, addr 0x3dcc418, size 0x80, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_TimeOfDay();

  /// @brief Method get_UtcNow, addr 0x3dcc32c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime get_UtcNow();

  /// @brief Method get_Year, addr 0x3dc9054, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Year();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::DateTime>"
  constexpr ::System::IComparable_1<::System::DateTime>* i___System__IComparable_1___System__DateTime_();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert to "::System::IEquatable_1<::System::DateTime>"
  constexpr ::System::IEquatable_1<::System::DateTime>* i___System__IEquatable_1___System__DateTime_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Addition, addr 0x3dcd9d0, size 0x100, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Addition(::System::DateTime d, ::System::TimeSpan t);

  /// @brief Method op_Equality, addr 0x3dcdc30, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::DateTime d1, ::System::DateTime d2);

  /// @brief Method op_GreaterThan, addr 0x3dcddd8, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x3dcde44, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_Inequality, addr 0x3dcdc98, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::DateTime d1, ::System::DateTime d2);

  /// @brief Method op_LessThan, addr 0x3dcdd00, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_LessThanOrEqual, addr 0x3dcdd6c, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_Subtraction, addr 0x3dcdad0, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Subtraction(::System::DateTime d, ::System::TimeSpan t);

  /// @brief Method op_Subtraction, addr 0x3dcdbc8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Subtraction(::System::DateTime d1, ::System::DateTime d2);

  static inline void setStaticF_MaxValue(::System::DateTime value);

  static inline void setStaticF_MinValue(::System::DateTime value);

  static inline void setStaticF_UnixEpoch(::System::DateTime value);

  static inline void setStaticF_s_daysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_daysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTime();

  // Ctor Parameters [CppParam { name: "_dateData", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr DateTime(uint64_t _dateData) noexcept;

  /// @brief Field DateDataField offset 0xffffffff size 0x8
  static constexpr ::ConstString DateDataField{ u"dateData" };

  /// @brief Field DatePartDay offset 0xffffffff size 0x4
  static constexpr int32_t DatePartDay{ static_cast<int32_t>(0x3) };

  /// @brief Field DatePartDayOfYear offset 0xffffffff size 0x4
  static constexpr int32_t DatePartDayOfYear{ static_cast<int32_t>(0x1) };

  /// @brief Field DatePartMonth offset 0xffffffff size 0x4
  static constexpr int32_t DatePartMonth{ static_cast<int32_t>(0x2) };

  /// @brief Field DatePartYear offset 0xffffffff size 0x4
  static constexpr int32_t DatePartYear{ static_cast<int32_t>(0x0) };

  /// @brief Field DaysPer100Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer100Years{ static_cast<int32_t>(0x8eac) };

  /// @brief Field DaysPer400Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer400Years{ static_cast<int32_t>(0x23ab1) };

  /// @brief Field DaysPer4Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer4Years{ static_cast<int32_t>(0x5b5) };

  /// @brief Field DaysPerYear offset 0xffffffff size 0x4
  static constexpr int32_t DaysPerYear{ static_cast<int32_t>(0x16d) };

  /// @brief Field DaysTo10000 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo10000{ static_cast<int32_t>(0x37b9db) };

  /// @brief Field DaysTo1601 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo1601{ static_cast<int32_t>(0x8eac4) };

  /// @brief Field DaysTo1899 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo1899{ static_cast<int32_t>(0xa9559) };

  /// @brief Field DaysTo1970 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo1970{ static_cast<int32_t>(0xaf93a) };

  /// @brief Field DoubleDateOffset offset 0xffffffff size 0x8
  static constexpr int64_t DoubleDateOffset{ static_cast<int64_t>(0x85103c0cb83c000) };

  /// @brief Field FileTimeOffset offset 0xffffffff size 0x8
  static constexpr int64_t FileTimeOffset{ static_cast<int64_t>(0x701ce1722770000) };

  /// @brief Field FlagsMask offset 0xffffffff size 0x8
  static constexpr uint64_t FlagsMask{ static_cast<uint64_t>(0xc000000000000000u) };

  /// @brief Field KindLocal offset 0xffffffff size 0x8
  static constexpr uint64_t KindLocal{ static_cast<uint64_t>(0x8000000000000000u) };

  /// @brief Field KindLocalAmbiguousDst offset 0xffffffff size 0x8
  static constexpr uint64_t KindLocalAmbiguousDst{ static_cast<uint64_t>(0xc000000000000000u) };

  /// @brief Field KindShift offset 0xffffffff size 0x4
  static constexpr int32_t KindShift{ static_cast<int32_t>(0x3e) };

  /// @brief Field KindUnspecified offset 0xffffffff size 0x8
  static constexpr uint64_t KindUnspecified{ static_cast<uint64_t>(0x0u) };

  /// @brief Field KindUtc offset 0xffffffff size 0x8
  static constexpr uint64_t KindUtc{ static_cast<uint64_t>(0x4000000000000000u) };

  /// @brief Field LocalMask offset 0xffffffff size 0x8
  static constexpr uint64_t LocalMask{ static_cast<uint64_t>(0x8000000000000000u) };

  /// @brief Field MaxMillis offset 0xffffffff size 0x8
  static constexpr int64_t MaxMillis{ static_cast<int64_t>(0x11efae44cb400) };

  /// @brief Field MaxTicks offset 0xffffffff size 0x8
  static constexpr int64_t MaxTicks{ static_cast<int64_t>(0x2bca2875f4373fff) };

  /// @brief Field MillisPerDay offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerDay{ static_cast<int32_t>(0x5265c00) };

  /// @brief Field MillisPerHour offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerHour{ static_cast<int32_t>(0x36ee80) };

  /// @brief Field MillisPerMinute offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerMinute{ static_cast<int32_t>(0xea60) };

  /// @brief Field MillisPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerSecond{ static_cast<int32_t>(0x3e8) };

  /// @brief Field MinTicks offset 0xffffffff size 0x8
  static constexpr int64_t MinTicks{ static_cast<int64_t>(0x0) };

  /// @brief Field OADateMaxAsDouble offset 0xffffffff size 0x8
  static constexpr double_t OADateMaxAsDouble{ static_cast<double_t>(2958466.0) };

  /// @brief Field OADateMinAsDouble offset 0xffffffff size 0x8
  static constexpr double_t OADateMinAsDouble{ static_cast<double_t>(-657435.0) };

  /// @brief Field OADateMinAsTicks offset 0xffffffff size 0x8
  static constexpr int64_t OADateMinAsTicks{ static_cast<int64_t>(0x6efdddaec64000) };

  /// @brief Field TicksCeiling offset 0xffffffff size 0x8
  static constexpr int64_t TicksCeiling{ static_cast<int64_t>(0x4000000000000000) };

  /// @brief Field TicksField offset 0xffffffff size 0x8
  static constexpr ::ConstString TicksField{ u"ticks" };

  /// @brief Field TicksMask offset 0xffffffff size 0x8
  static constexpr uint64_t TicksMask{ static_cast<uint64_t>(0x3fffffffffffffffu) };

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

  /// @brief Field UnixEpochTicks offset 0xffffffff size 0x8
  static constexpr int64_t UnixEpochTicks{ static_cast<int64_t>(0x89f7ff5f7b58000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _dateData, offset: 0x0, size: 0x8, def value: None
  uint64_t _dateData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::DateTime, _dateData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::DateTime, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTime, "System", "DateTime");
