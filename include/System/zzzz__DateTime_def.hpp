#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class ISerializable;
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
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
class IConvertible;
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
// Type: System::DateTime
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2368))
// CS Name: ::System::DateTime
struct CORDL_TYPE DateTime {
public:
  // Declarations
  /// @brief Field s_daysToMonth365, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_daysToMonth365, put = setStaticF_s_daysToMonth365))::ArrayW<int32_t, ::Array<int32_t>*> s_daysToMonth365;

  /// @brief Field s_daysToMonth366, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_daysToMonth366, put = setStaticF_s_daysToMonth366))::ArrayW<int32_t, ::Array<int32_t>*> s_daysToMonth366;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue))::System::DateTime MinValue;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue))::System::DateTime MaxValue;

  /// @brief Field UnixEpoch, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnixEpoch, put = setStaticF_UnixEpoch))::System::DateTime UnixEpoch;

  __declspec(property(get = get_InternalTicks)) int64_t InternalTicks;

  __declspec(property(get = get_InternalKind)) uint64_t InternalKind;

  __declspec(property(get = get_Date))::System::DateTime Date;

  __declspec(property(get = get_Day)) int32_t Day;

  __declspec(property(get = get_DayOfWeek))::System::DayOfWeek DayOfWeek;

  __declspec(property(get = get_Hour)) int32_t Hour;

  __declspec(property(get = get_Kind))::System::DateTimeKind Kind;

  __declspec(property(get = get_Millisecond)) int32_t Millisecond;

  __declspec(property(get = get_Minute)) int32_t Minute;

  __declspec(property(get = get_Month)) int32_t Month;

  __declspec(property(get = get_Second)) int32_t Second;

  __declspec(property(get = get_Ticks)) int64_t Ticks;

  __declspec(property(get = get_TimeOfDay))::System::TimeSpan TimeOfDay;

  __declspec(property(get = get_Year)) int32_t Year;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert operator to "::System::IConvertible"
  constexpr operator ::System::IConvertible*();

  /// @brief Convert to "::System::IConvertible"
  constexpr ::System::IConvertible* i___System__IConvertible();

  /// @brief Convert operator to "::System::IComparable_1<::System::DateTime>"
  constexpr operator ::System::IComparable_1<::System::DateTime>*();

  /// @brief Convert to "::System::IComparable_1<::System::DateTime>"
  constexpr ::System::IComparable_1<::System::DateTime>* i___System__IComparable_1___System__DateTime_();

  /// @brief Convert operator to "::System::IEquatable_1<::System::DateTime>"
  constexpr operator ::System::IEquatable_1<::System::DateTime>*();

  /// @brief Convert to "::System::IEquatable_1<::System::DateTime>"
  constexpr ::System::IEquatable_1<::System::DateTime>* i___System__IEquatable_1___System__DateTime_();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  static inline void setStaticF_s_daysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_daysToMonth365();

  static inline void setStaticF_s_daysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_daysToMonth366();

  static inline void setStaticF_MinValue(::System::DateTime value);

  static inline ::System::DateTime getStaticF_MinValue();

  static inline void setStaticF_MaxValue(::System::DateTime value);

  static inline ::System::DateTime getStaticF_MaxValue();

  static inline void setStaticF_UnixEpoch(::System::DateTime value);

  static inline ::System::DateTime getStaticF_UnixEpoch();

  /// @brief Method .ctor, addr 0x258e5a0, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks);

  /// @brief Method .ctor, addr 0x258e630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t dateData);

  /// @brief Method .ctor, addr 0x258e638, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks, ::System::DateTimeKind kind);

  /// @brief Method .ctor, addr 0x258e720, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks, ::System::DateTimeKind kind, bool isAmbiguousDst);

  /// @brief Method .ctor, addr 0x258e7c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day);

  /// @brief Method .ctor, addr 0x258e9f0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);

  /// @brief Method .ctor, addr 0x258eb74, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::System::DateTimeKind kind);

  /// @brief Method .ctor, addr 0x258ec90, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);

  /// @brief Method .ctor, addr 0x258ee68, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::DateTimeKind kind);

  /// @brief Method .ctor, addr 0x258f09c, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::Globalization::Calendar* calendar);

  /// @brief Method .ctor, addr 0x258f250, size 0x2a8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_InternalTicks, addr 0x258f4f8, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_InternalTicks();

  /// @brief Method get_InternalKind, addr 0x258f504, size 0xc, virtual false, abstract: false, final false
  inline uint64_t get_InternalKind();

  /// @brief Method Add, addr 0x258f510, size 0x4, virtual false, abstract: false, final false
  inline ::System::DateTime Add(::System::TimeSpan value);

  /// @brief Method Add, addr 0x258f5c4, size 0xd4, virtual false, abstract: false, final false
  inline ::System::DateTime Add(double_t value, int32_t scale);

  /// @brief Method AddDays, addr 0x258f698, size 0xc, virtual false, abstract: false, final false
  inline ::System::DateTime AddDays(double_t value);

  /// @brief Method AddMilliseconds, addr 0x258f6a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime AddMilliseconds(double_t value);

  /// @brief Method AddMonths, addr 0x258f6ac, size 0x244, virtual false, abstract: false, final false
  inline ::System::DateTime AddMonths(int32_t months);

  /// @brief Method AddSeconds, addr 0x258fc0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime AddSeconds(double_t value);

  /// @brief Method AddTicks, addr 0x258f514, size 0xb0, virtual false, abstract: false, final false
  inline ::System::DateTime AddTicks(int64_t value);

  /// @brief Method AddYears, addr 0x258fc14, size 0x88, virtual false, abstract: false, final false
  inline ::System::DateTime AddYears(int32_t value);

  /// @brief Method Compare, addr 0x258fc9c, size 0x20, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method CompareTo, addr 0x258fcbc, size 0x100, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x258fdbc, size 0x74, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::DateTime value);

  /// @brief Method DateToTicks, addr 0x258e844, size 0x1ac, virtual false, abstract: false, final false
  static inline int64_t DateToTicks(int32_t year, int32_t month, int32_t day);

  /// @brief Method TimeToTicks, addr 0x258ea9c, size 0xd8, virtual false, abstract: false, final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);

  /// @brief Method DaysInMonth, addr 0x258fadc, size 0x130, virtual false, abstract: false, final false
  static inline int32_t DaysInMonth(int32_t year, int32_t month);

  /// @brief Method Equals, addr 0x258fefc, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method Equals, addr 0x258ff78, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(::System::DateTime value);

  /// @brief Method FromBinary, addr 0x258ff8c, size 0x234, virtual false, abstract: false, final false
  static inline ::System::DateTime FromBinary(int64_t dateData);

  /// @brief Method FromBinaryRaw, addr 0x25901c0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::DateTime FromBinaryRaw(int64_t dateData);

  /// @brief Method FromFileTime, addr 0x2590248, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime FromFileTime(int64_t fileTime);

  /// @brief Method FromFileTimeUtc, addr 0x25902bc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::DateTime FromFileTimeUtc(int64_t fileTime);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2590374, size 0xd0, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SpecifyKind, addr 0x2590444, size 0x24, virtual false, abstract: false, final false
  static inline ::System::DateTime SpecifyKind(::System::DateTime value, ::System::DateTimeKind kind);

  /// @brief Method get_Date, addr 0x2590468, size 0x3c, virtual false, abstract: false, final false
  inline ::System::DateTime get_Date();

  /// @brief Method GetDatePart, addr 0x25904a4, size 0x1f0, virtual false, abstract: false, final false
  inline int32_t GetDatePart(int32_t part);

  /// @brief Method GetDatePart, addr 0x258f8f0, size 0x1ec, virtual false, abstract: false, final false
  inline void GetDatePart(ByRef<int32_t> year, ByRef<int32_t> month, ByRef<int32_t> day);

  /// @brief Method get_Day, addr 0x2590694, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Day();

  /// @brief Method get_DayOfWeek, addr 0x259069c, size 0x4c, virtual false, abstract: false, final false
  inline ::System::DayOfWeek get_DayOfWeek();

  /// @brief Method GetHashCode, addr 0x25906e8, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_Hour, addr 0x25906f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Hour();

  /// @brief Method IsAmbiguousDaylightSavingTime, addr 0x2590734, size 0x14, virtual false, abstract: false, final false
  inline bool IsAmbiguousDaylightSavingTime();

  /// @brief Method get_Kind, addr 0x258df38, size 0x28, virtual false, abstract: false, final false
  inline ::System::DateTimeKind get_Kind();

  /// @brief Method get_Millisecond, addr 0x2590748, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Millisecond();

  /// @brief Method get_Minute, addr 0x2590790, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Minute();

  /// @brief Method get_Month, addr 0x25907cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Month();

  /// @brief Method get_Now, addr 0x25907d4, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::DateTime get_Now();

  /// @brief Method get_Second, addr 0x259092c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_Second();

  /// @brief Method get_Ticks, addr 0x258f244, size 0xc, virtual false, abstract: false, final false
  inline int64_t get_Ticks();

  /// @brief Method get_TimeOfDay, addr 0x2590968, size 0x34, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_TimeOfDay();

  /// @brief Method get_Year, addr 0x258de7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Year();

  /// @brief Method IsLeapYear, addr 0x258fe30, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsLeapYear(int32_t year);

  /// @brief Method Parse, addr 0x259099c, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::StringW s);

  /// @brief Method Parse, addr 0x2590b70, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::StringW s, ::System::IFormatProvider* provider);

  /// @brief Method Parse, addr 0x2590c64, size 0x130, virtual false, abstract: false, final false
  static inline ::System::DateTime Parse(::StringW s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method ParseExact, addr 0x2590d94, size 0x164, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method ParseExact, addr 0x2591000, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style);

  /// @brief Method Subtract, addr 0x25911a0, size 0x14, virtual false, abstract: false, final false
  inline ::System::TimeSpan Subtract(::System::DateTime value);

  /// @brief Method ToLocalTime, addr 0x259036c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime ToLocalTime();

  /// @brief Method ToLocalTime, addr 0x25911b4, size 0x154, virtual false, abstract: false, final false
  inline ::System::DateTime ToLocalTime(bool throwOnOverflow);

  /// @brief Method ToString, addr 0x2591308, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x25913e0, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x259144c, size 0x6c, virtual true, abstract: false, final true
  inline ::StringW ToString(::System::IFormatProvider* provider);

  /// @brief Method ToString, addr 0x25914b8, size 0x70, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);

  /// @brief Method TryFormat, addr 0x2591528, size 0xa0, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method ToUniversalTime, addr 0x2591680, size 0x60, virtual false, abstract: false, final false
  inline ::System::DateTime ToUniversalTime();

  /// @brief Method TryParse, addr 0x25916e0, size 0x144, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTime> result);

  /// @brief Method TryParseExact, addr 0x259193c, size 0x190, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style, ByRef<::System::DateTime> result);

  /// @brief Method op_Addition, addr 0x2591bfc, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Addition(::System::DateTime d, ::System::TimeSpan t);

  /// @brief Method op_Subtraction, addr 0x2591ca0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Subtraction(::System::DateTime d, ::System::TimeSpan t);

  /// @brief Method op_Subtraction, addr 0x2591d3c, size 0x10, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Subtraction(::System::DateTime d1, ::System::DateTime d2);

  /// @brief Method op_Equality, addr 0x2591d4c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::DateTime d1, ::System::DateTime d2);

  /// @brief Method op_Inequality, addr 0x2591d5c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::DateTime d1, ::System::DateTime d2);

  /// @brief Method op_LessThan, addr 0x2591d6c, size 0x14, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_LessThanOrEqual, addr 0x2591d80, size 0x14, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_GreaterThan, addr 0x2591d94, size 0x14, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x2591da8, size 0x14, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::DateTime t1, ::System::DateTime t2);

  /// @brief Method GetTypeCode, addr 0x2591dbc, size 0x8, virtual true, abstract: false, final true
  inline ::System::TypeCode GetTypeCode();

  /// @brief Method System.IConvertible.ToBoolean, addr 0x2591dc4, size 0x8c, virtual true, abstract: false, final true
  inline bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToChar, addr 0x2591e50, size 0x8c, virtual true, abstract: false, final true
  inline char16_t System_IConvertible_ToChar(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSByte, addr 0x2591edc, size 0x8c, virtual true, abstract: false, final true
  inline int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToByte, addr 0x2591f68, size 0x8c, virtual true, abstract: false, final true
  inline uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt16, addr 0x2591ff4, size 0x8c, virtual true, abstract: false, final true
  inline int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt16, addr 0x2592080, size 0x8c, virtual true, abstract: false, final true
  inline uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt32, addr 0x259210c, size 0x8c, virtual true, abstract: false, final true
  inline int32_t System_IConvertible_ToInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt32, addr 0x2592198, size 0x8c, virtual true, abstract: false, final true
  inline uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToInt64, addr 0x2592224, size 0x8c, virtual true, abstract: false, final true
  inline int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToUInt64, addr 0x25922b0, size 0x8c, virtual true, abstract: false, final true
  inline uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToSingle, addr 0x259233c, size 0x8c, virtual true, abstract: false, final true
  inline float_t System_IConvertible_ToSingle(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDouble, addr 0x25923c8, size 0x8c, virtual true, abstract: false, final true
  inline double_t System_IConvertible_ToDouble(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDecimal, addr 0x2592454, size 0x8c, virtual true, abstract: false, final true
  inline ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToDateTime, addr 0x25924e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);

  /// @brief Method System.IConvertible.ToType, addr 0x25924e8, size 0xac, virtual true, abstract: false, final true
  inline ::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);

  /// @brief Method TryCreate, addr 0x2592594, size 0x1f0, virtual false, abstract: false, final false
  static inline bool TryCreate(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ByRef<::System::DateTime> result);

  /// @brief Method get_UtcNow, addr 0x25908c8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime get_UtcNow();

  /// @brief Method GetSystemTimeAsFileTime, addr 0x2592784, size 0x4, virtual false, abstract: false, final false
  static inline int64_t GetSystemTimeAsFileTime();

  /// @brief Method ToBinaryRaw, addr 0x2592788, size 0x8, virtual false, abstract: false, final false
  inline int64_t ToBinaryRaw();

  // Ctor Parameters [CppParam { name: "_dateData", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr DateTime(uint64_t _dateData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTime();

  /// @brief Field _dateData, offset: 0x0, size: 0x8, def value: None
  uint64_t _dateData;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field TicksPerMillisecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMillisecond{ static_cast<int64_t>(0x2710) };

  /// @brief Field TicksPerSecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerSecond{ static_cast<int64_t>(0x989680) };

  /// @brief Field TicksPerMinute offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMinute{ static_cast<int64_t>(0x23c34600) };

  /// @brief Field TicksPerHour offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerHour{ static_cast<int64_t>(0x861c46800) };

  /// @brief Field TicksPerDay offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerDay{ static_cast<int64_t>(0xc92a69c000) };

  /// @brief Field MillisPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerSecond{ static_cast<int32_t>(0x3e8) };

  /// @brief Field MillisPerMinute offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerMinute{ static_cast<int32_t>(0xea60) };

  /// @brief Field MillisPerHour offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerHour{ static_cast<int32_t>(0x36ee80) };

  /// @brief Field MillisPerDay offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerDay{ static_cast<int32_t>(0x5265c00) };

  /// @brief Field DaysPerYear offset 0xffffffff size 0x4
  static constexpr int32_t DaysPerYear{ static_cast<int32_t>(0x16d) };

  /// @brief Field DaysPer4Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer4Years{ static_cast<int32_t>(0x5b5) };

  /// @brief Field DaysPer100Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer100Years{ static_cast<int32_t>(0x8eac) };

  /// @brief Field DaysPer400Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer400Years{ static_cast<int32_t>(0x23ab1) };

  /// @brief Field DaysTo1601 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo1601{ static_cast<int32_t>(0x8eac4) };

  /// @brief Field DaysTo1899 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo1899{ static_cast<int32_t>(0xa9559) };

  /// @brief Field DaysTo1970 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo1970{ static_cast<int32_t>(0xaf93a) };

  /// @brief Field DaysTo10000 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo10000{ static_cast<int32_t>(0x37b9db) };

  /// @brief Field MinTicks offset 0xffffffff size 0x8
  static constexpr int64_t MinTicks{ static_cast<int64_t>(0x0) };

  /// @brief Field MaxTicks offset 0xffffffff size 0x8
  static constexpr int64_t MaxTicks{ static_cast<int64_t>(0x2bca2875f4373fff) };

  /// @brief Field MaxMillis offset 0xffffffff size 0x8
  static constexpr int64_t MaxMillis{ static_cast<int64_t>(0x11efae44cb400) };

  /// @brief Field UnixEpochTicks offset 0xffffffff size 0x8
  static constexpr int64_t UnixEpochTicks{ static_cast<int64_t>(0x89f7ff5f7b58000) };

  /// @brief Field FileTimeOffset offset 0xffffffff size 0x8
  static constexpr int64_t FileTimeOffset{ static_cast<int64_t>(0x701ce1722770000) };

  /// @brief Field DoubleDateOffset offset 0xffffffff size 0x8
  static constexpr int64_t DoubleDateOffset{ static_cast<int64_t>(0x85103c0cb83c000) };

  /// @brief Field OADateMinAsTicks offset 0xffffffff size 0x8
  static constexpr int64_t OADateMinAsTicks{ static_cast<int64_t>(0x6efdddaec64000) };

  /// @brief Field OADateMinAsDouble offset 0xffffffff size 0x8
  static constexpr double_t OADateMinAsDouble{ -657435.0 };

  /// @brief Field OADateMaxAsDouble offset 0xffffffff size 0x8
  static constexpr double_t OADateMaxAsDouble{ 2958466.0 };

  /// @brief Field DatePartYear offset 0xffffffff size 0x4
  static constexpr int32_t DatePartYear{ static_cast<int32_t>(0x0) };

  /// @brief Field DatePartDayOfYear offset 0xffffffff size 0x4
  static constexpr int32_t DatePartDayOfYear{ static_cast<int32_t>(0x1) };

  /// @brief Field DatePartMonth offset 0xffffffff size 0x4
  static constexpr int32_t DatePartMonth{ static_cast<int32_t>(0x2) };

  /// @brief Field DatePartDay offset 0xffffffff size 0x4
  static constexpr int32_t DatePartDay{ static_cast<int32_t>(0x3) };

  /// @brief Field TicksMask offset 0xffffffff size 0x8
  static constexpr uint64_t TicksMask{ static_cast<uint64_t>(0x3fffffffffffffffu) };

  /// @brief Field FlagsMask offset 0xffffffff size 0x8
  static constexpr uint64_t FlagsMask{ static_cast<uint64_t>(0xc000000000000000u) };

  /// @brief Field LocalMask offset 0xffffffff size 0x8
  static constexpr uint64_t LocalMask{ static_cast<uint64_t>(0x8000000000000000u) };

  /// @brief Field TicksCeiling offset 0xffffffff size 0x8
  static constexpr int64_t TicksCeiling{ static_cast<int64_t>(0x4000000000000000) };

  /// @brief Field KindUnspecified offset 0xffffffff size 0x8
  static constexpr uint64_t KindUnspecified{ static_cast<uint64_t>(0x0u) };

  /// @brief Field KindUtc offset 0xffffffff size 0x8
  static constexpr uint64_t KindUtc{ static_cast<uint64_t>(0x4000000000000000u) };

  /// @brief Field KindLocal offset 0xffffffff size 0x8
  static constexpr uint64_t KindLocal{ static_cast<uint64_t>(0x8000000000000000u) };

  /// @brief Field KindLocalAmbiguousDst offset 0xffffffff size 0x8
  static constexpr uint64_t KindLocalAmbiguousDst{ static_cast<uint64_t>(0xc000000000000000u) };

  /// @brief Field KindShift offset 0xffffffff size 0x4
  static constexpr int32_t KindShift{ static_cast<int32_t>(0x3e) };

  /// @brief Field TicksField offset 0xffffffff size 0x8
  static constexpr ::ConstString TicksField{ u"ticks" };

  /// @brief Field DateDataField offset 0xffffffff size 0x8
  static constexpr ::ConstString DateDataField{ u"dateData" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTime, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::DateTime, _dateData) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTime, "System", "DateTime");
