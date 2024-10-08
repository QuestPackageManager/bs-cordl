#pragma once
// IWYU pragma private; include "System/DateTimeOffset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeOffset)
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
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
struct DateTime;
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
struct TimeSpan;
}
// Forward declare root types
namespace System {
struct DateTimeOffset;
}
// Write type traits
MARK_VAL_T(::System::DateTimeOffset);
// Type: System::DateTimeOffset
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::DateTimeOffset
struct CORDL_TYPE DateTimeOffset {
public:
  // Declarations
  __declspec(property(get = get_ClockDateTime)) ::System::DateTime ClockDateTime;

  __declspec(property(get = get_DateTime)) ::System::DateTime DateTime;

  __declspec(property(get = get_Day)) int32_t Day;

  __declspec(property(get = get_Hour)) int32_t Hour;

  __declspec(property(get = get_LocalDateTime)) ::System::DateTime LocalDateTime;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::DateTimeOffset MaxValue;

  __declspec(property(get = get_Millisecond)) int32_t Millisecond;

  /// @brief Field MinValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::DateTimeOffset MinValue;

  __declspec(property(get = get_Minute)) int32_t Minute;

  __declspec(property(get = get_Month)) int32_t Month;

  __declspec(property(get = get_Offset)) ::System::TimeSpan Offset;

  __declspec(property(get = get_Second)) int32_t Second;

  __declspec(property(get = get_Ticks)) int64_t Ticks;

  __declspec(property(get = get_TimeOfDay)) ::System::TimeSpan TimeOfDay;

  /// @brief Field UnixEpoch, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_UnixEpoch, put = setStaticF_UnixEpoch)) ::System::DateTimeOffset UnixEpoch;

  __declspec(property(get = get_UtcDateTime)) ::System::DateTime UtcDateTime;

  __declspec(property(get = get_Year)) int32_t Year;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::DateTimeOffset>"
  constexpr operator ::System::IComparable_1<::System::DateTimeOffset>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::DateTimeOffset>"
  constexpr operator ::System::IEquatable_1<::System::DateTimeOffset>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method AddTicks, addr 0x3d5b1ac, size 0xdc, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset AddTicks(int64_t ticks);

  /// @brief Method Compare, addr 0x3d5b288, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::DateTimeOffset first, ::System::DateTimeOffset second);

  /// @brief Method CompareTo, addr 0x3d5b474, size 0xd4, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::DateTimeOffset other);

  /// @brief Method Equals, addr 0x3d5b548, size 0xf0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3d5b638, size 0xac, virtual true, abstract: false, final true
  inline bool Equals(::System::DateTimeOffset other);

  /// @brief Method FromFileTime, addr 0x3d5b6e4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset FromFileTime(int64_t fileTime);

  /// @brief Method FromUnixTimeSeconds, addr 0x3d5b758, size 0x170, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset FromUnixTimeSeconds(int64_t seconds);

  /// @brief Method GetHashCode, addr 0x3d5bccc, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Parse, addr 0x3d5bd60, size 0x70, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset Parse(::StringW input, ::System::IFormatProvider* formatProvider);

  /// @brief Method Parse, addr 0x3d5bdd0, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset Parse(::StringW input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method ParseExact, addr 0x3d5c150, size 0x218, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset ParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles);

  /// @brief Method System.IComparable.CompareTo, addr 0x3d5b32c, size 0x148, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3d5b8c8, size 0x180, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3d5ba48, size 0xc8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToLocalTime, addr 0x3d5c4bc, size 0x58, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset ToLocalTime();

  /// @brief Method ToLocalTime, addr 0x3d5c514, size 0xb8, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset ToLocalTime(bool throwOnOverflow);

  /// @brief Method ToString, addr 0x3d5c5cc, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x3d5c9f8, size 0xcc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method ToString, addr 0x3d5c938, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW ToString(::System::IFormatProvider* formatProvider);

  /// @brief Method ToUniversalTime, addr 0x3d5cdd0, size 0x74, virtual false, abstract: false, final false
  inline ::System::DateTimeOffset ToUniversalTime();

  /// @brief Method TryFormat, addr 0x3d5cac4, size 0x100, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryParse, addr 0x3d5ce44, size 0x1b0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ByRef<::System::DateTimeOffset> result);

  /// @brief Method TryParseExact, addr 0x3d5d158, size 0x1f8, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles,
                                   ByRef<::System::DateTimeOffset> result);

  /// @brief Method TryParseExact, addr 0x3d5d4cc, size 0x1c4, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::ArrayW<::StringW, ::Array<::StringW>*> formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles,
                                   ByRef<::System::DateTimeOffset> result);

  /// @brief Method ValidateDate, addr 0x3d5a318, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::DateTime ValidateDate(::System::DateTime dateTime, ::System::TimeSpan offset);

  /// @brief Method ValidateOffset, addr 0x3d5a1c0, size 0x158, virtual false, abstract: false, final false
  static inline int16_t ValidateOffset(::System::TimeSpan offset);

  /// @brief Method ValidateStyles, addr 0x3d5bf7c, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Globalization::DateTimeStyles ValidateStyles(::System::Globalization::DateTimeStyles style, ::StringW parameterName);

  /// @brief Method .ctor, addr 0x3d5a434, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dateTime);

  /// @brief Method .ctor, addr 0x3d5a548, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dateTime, ::System::TimeSpan offset);

  /// @brief Method .ctor, addr 0x3d5bb10, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d5a108, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks, ::System::TimeSpan offset);

  /// @brief Method .ctor, addr 0x3d5a8e8, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::Globalization::Calendar* calendar,
                    ::System::TimeSpan offset);

  /// @brief Method .ctor, addr 0x3d5a80c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::TimeSpan offset);

  /// @brief Method .ctor, addr 0x3d5a740, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::System::TimeSpan offset);

  static inline ::System::DateTimeOffset getStaticF_MaxValue();

  static inline ::System::DateTimeOffset getStaticF_MinValue();

  static inline ::System::DateTimeOffset getStaticF_UnixEpoch();

  /// @brief Method get_ClockDateTime, addr 0x3d5aa8c, size 0xd0, virtual false, abstract: false, final false
  inline ::System::DateTime get_ClockDateTime();

  /// @brief Method get_DateTime, addr 0x3d5aa38, size 0x54, virtual false, abstract: false, final false
  inline ::System::DateTime get_DateTime();

  /// @brief Method get_Day, addr 0x3d5ac78, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Day();

  /// @brief Method get_Hour, addr 0x3d5ad0c, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Hour();

  /// @brief Method get_LocalDateTime, addr 0x3d5abb8, size 0x94, virtual false, abstract: false, final false
  inline ::System::DateTime get_LocalDateTime();

  /// @brief Method get_Millisecond, addr 0x3d5ada0, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Millisecond();

  /// @brief Method get_Minute, addr 0x3d5ae34, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Minute();

  /// @brief Method get_Month, addr 0x3d5aec8, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Month();

  /// @brief Method get_Now, addr 0x3d5a9cc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset get_Now();

  /// @brief Method get_Offset, addr 0x3d5ac4c, size 0x2c, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_Offset();

  /// @brief Method get_Second, addr 0x3d5af5c, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Second();

  /// @brief Method get_Ticks, addr 0x3d5aff0, size 0x94, virtual false, abstract: false, final false
  inline int64_t get_Ticks();

  /// @brief Method get_TimeOfDay, addr 0x3d5b084, size 0x94, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_TimeOfDay();

  /// @brief Method get_UtcDateTime, addr 0x3d5ab5c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::DateTime get_UtcDateTime();

  /// @brief Method get_Year, addr 0x3d5b118, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_Year();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::DateTimeOffset>"
  constexpr ::System::IComparable_1<::System::DateTimeOffset>* i___System__IComparable_1___System__DateTimeOffset_();

  /// @brief Convert to "::System::IEquatable_1<::System::DateTimeOffset>"
  constexpr ::System::IEquatable_1<::System::DateTimeOffset>* i___System__IEquatable_1___System__DateTimeOffset_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Convert to "::System::ISpanFormattable"
  constexpr ::System::ISpanFormattable* i___System__ISpanFormattable();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Equality, addr 0x3d5d8c8, size 0xa4, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::DateTimeOffset left, ::System::DateTimeOffset right);

  /// @brief Method op_Implicit, addr 0x3d5d7fc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset op_Implicit___System__DateTimeOffset(::System::DateTime dateTime);

  /// @brief Method op_Inequality, addr 0x3d5d96c, size 0xa4, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::DateTimeOffset left, ::System::DateTimeOffset right);

  /// @brief Method op_Subtraction, addr 0x3d5d824, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Subtraction(::System::DateTimeOffset left, ::System::DateTimeOffset right);

  static inline void setStaticF_MaxValue(::System::DateTimeOffset value);

  static inline void setStaticF_MinValue(::System::DateTimeOffset value);

  static inline void setStaticF_UnixEpoch(::System::DateTimeOffset value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeOffset();

  // Ctor Parameters [CppParam { name: "_dateTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_offsetMinutes", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr DateTimeOffset(::System::DateTime _dateTime, int16_t _offsetMinutes) noexcept;

  /// @brief Field _dateTime, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime _dateTime;

  /// @brief Field _offsetMinutes, offset: 0x8, size: 0x2, def value: None
  int16_t _offsetMinutes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2372 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeOffset, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::DateTimeOffset, _dateTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeOffset, _offsetMinutes) == 0x8, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeOffset, "System", "DateTimeOffset");
