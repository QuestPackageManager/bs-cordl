#pragma once
// IWYU pragma private; include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Dependencies
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

  __declspec(property(get = get_Milliseconds)) int32_t Milliseconds;

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

  /// @brief Method Add, addr 0x5a48588, size 0x64, virtual false, abstract: false, final false
  inline ::System::TimeSpan Add(::System::TimeSpan ts);

  /// @brief Method Compare, addr 0x5a485ec, size 0x10, virtual false, abstract: false, final false
  static inline int32_t Compare(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method CompareTo, addr 0x5a485fc, size 0xc8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method CompareTo, addr 0x5a486c4, size 0x14, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::TimeSpan value);

  /// @brief Method Duration, addr 0x5a48834, size 0xb8, virtual false, abstract: false, final false
  inline ::System::TimeSpan Duration();

  /// @brief Method Equals, addr 0x5a48968, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeSpan obj);

  /// @brief Method Equals, addr 0x5a488ec, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method FromDays, addr 0x5a486d8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromDays(double_t value);

  /// @brief Method FromHours, addr 0x5a48984, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromHours(double_t value);

  /// @brief Method FromMilliseconds, addr 0x5a489ec, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromMilliseconds(double_t value);

  /// @brief Method FromMinutes, addr 0x5a48a50, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromMinutes(double_t value);

  /// @brief Method FromSeconds, addr 0x5a48b68, size 0x64, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromSeconds(double_t value);

  /// @brief Method FromTicks, addr 0x5a48c30, size 0x4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan FromTicks(int64_t value);

  /// @brief Method GetHashCode, addr 0x5a48978, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Interval, addr 0x5a48740, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Interval(double_t value, int32_t scale);

  /// @brief Method Negate, addr 0x5a48ab4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::TimeSpan Negate();

  /// @brief Method Parse, addr 0x5a48cb0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::StringW input, ::System::IFormatProvider* formatProvider);

  /// @brief Method Parse, addr 0x5a48c34, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan Parse(::StringW s);

  /// @brief Method Subtract, addr 0x5a48bcc, size 0x64, virtual false, abstract: false, final false
  inline ::System::TimeSpan Subtract(::System::TimeSpan ts);

  /// @brief Method TimeToTicks, addr 0x5a48248, size 0x98, virtual false, abstract: false, final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);

  /// @brief Method ToString, addr 0x5a48de4, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5a48e4c, size 0x74, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method ToString, addr 0x5a48ec0, size 0x78, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryFormat, addr 0x5a48f38, size 0xa8, virtual true, abstract: false, final true
  inline bool TryFormat(::System::Span_1<char16_t> destination, ::ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider);

  /// @brief Method TryParseExact, addr 0x5a48d38, size 0xac, virtual false, abstract: false, final false
  static inline bool TryParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::ByRef<::System::TimeSpan> result);

  /// @brief Method .ctor, addr 0x5a482e0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds);

  /// @brief Method .ctor, addr 0x5a481c4, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t hours, int32_t minutes, int32_t seconds);

  /// @brief Method .ctor, addr 0x5a481bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t ticks);

  static inline ::System::TimeSpan getStaticF_MaxValue();

  static inline ::System::TimeSpan getStaticF_MinValue();

  static inline ::System::TimeSpan getStaticF_Zero();

  /// @brief Method get_Days, addr 0x5a483a0, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_Days();

  /// @brief Method get_Hours, addr 0x5a483cc, size 0x44, virtual false, abstract: false, final false
  inline int32_t get_Hours();

  /// @brief Method get_Milliseconds, addr 0x5a48410, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_Milliseconds();

  /// @brief Method get_Minutes, addr 0x5a4845c, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Minutes();

  /// @brief Method get_Seconds, addr 0x5a484a4, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_Seconds();

  /// @brief Method get_Ticks, addr 0x5a48398, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Ticks();

  /// @brief Method get_TotalDays, addr 0x5a484f0, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalDays();

  /// @brief Method get_TotalHours, addr 0x5a48508, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalHours();

  /// @brief Method get_TotalMilliseconds, addr 0x5a48520, size 0x38, virtual false, abstract: false, final false
  inline double_t get_TotalMilliseconds();

  /// @brief Method get_TotalMinutes, addr 0x5a48558, size 0x18, virtual false, abstract: false, final false
  inline double_t get_TotalMinutes();

  /// @brief Method get_TotalSeconds, addr 0x5a48570, size 0x18, virtual false, abstract: false, final false
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

  /// @brief Method op_Addition, addr 0x5a490fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Addition(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Equality, addr 0x5a49168, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_GreaterThan, addr 0x5a49198, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_GreaterThanOrEqual, addr 0x5a491a4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_GreaterThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Inequality, addr 0x5a49174, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_LessThan, addr 0x5a49180, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThan(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_LessThanOrEqual, addr 0x5a4918c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_LessThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_Subtraction, addr 0x5a49090, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_Subtraction(::System::TimeSpan t1, ::System::TimeSpan t2);

  /// @brief Method op_UnaryNegation, addr 0x5a48fe0, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan op_UnaryNegation(::System::TimeSpan t);

  static inline void setStaticF_MaxValue(::System::TimeSpan value);

  static inline void setStaticF_MinValue(::System::TimeSpan value);

  static inline void setStaticF_Zero(::System::TimeSpan value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSpan();

  // Ctor Parameters [CppParam { name: "_ticks", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr TimeSpan(int64_t _ticks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2489 };

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
