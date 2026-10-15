#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeExtensions)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimeExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeExtensions*, "", "TimeExtensions");
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeExtensions
class CORDL_TYPE TimeExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method AsUnixTime, addr 0x35ba090, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::DateTime AsUnixTime(int64_t unixTime);

  /// [Extension]
  /// @brief Method DaysToSeconds, addr 0x35b9e24, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DaysToSeconds(int32_t days);

  /// [Extension]
  /// @brief Method GetFormattedRemainingTimeTwoOfDaysHoursMinutes, addr 0x35ba15c, size 0x248, virtual false, abstract: false, final false
  static inline ::StringW GetFormattedRemainingTimeTwoOfDaysHoursMinutes(::System::TimeSpan timeSpan);

  /// [Extension]
  /// @brief Method Hours, addr 0x35b9e4c, size 0x80, virtual false, abstract: false, final false
  static inline int32_t Hours(float_t time);

  /// [Extension]
  /// @brief Method HoursToSeconds, addr 0x35b9e34, size 0xc, virtual false, abstract: false, final false
  static inline int32_t HoursToSeconds(int32_t hours);

  /// [Extension]
  /// @brief Method Milliseconds, addr 0x35b9d4c, size 0x38, virtual false, abstract: false, final false
  static inline int32_t Milliseconds(float_t time);

  /// [Extension]
  /// @brief Method MinSecDurationText, addr 0x35b99cc, size 0x1d0, virtual false, abstract: false, final false
  static inline ::StringW MinSecDurationText(float_t duration);

  /// [Extension]
  /// @brief Method MinSecMillisecDurationText, addr 0x35b9c48, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW MinSecMillisecDurationText(float_t duration);

  /// [Extension]
  /// @brief Method Minutes, addr 0x35b9b9c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Minutes(float_t time);

  /// [Extension]
  /// @brief Method MinutesToSeconds, addr 0x35b9e40, size 0xc, virtual false, abstract: false, final false
  static inline int32_t MinutesToSeconds(int32_t minutes);

  /// [Extension]
  /// @brief Method OneBeatDuration, addr 0x35b9d84, size 0x1c, virtual false, abstract: false, final false
  static inline float_t OneBeatDuration(float_t bpm);

  /// [Extension]
  /// @brief Method Seconds, addr 0x35b9c18, size 0x30, virtual false, abstract: false, final false
  static inline int32_t Seconds(float_t time);

  /// [Extension]
  /// @brief Method SecondsToDays, addr 0x35b9dc4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t SecondsToDays(int32_t time);

  /// [Extension]
  /// @brief Method SecondsToHours, addr 0x35b9de4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t SecondsToHours(int32_t time);

  /// [Extension]
  /// @brief Method SecondsToMinutes, addr 0x35b9db4, size 0x10, virtual false, abstract: false, final false
  static inline float_t SecondsToMinutes(float_t seconds);

  /// [Extension]
  /// @brief Method SecondsToMinutes, addr 0x35b9e04, size 0x20, virtual false, abstract: false, final false
  static inline int32_t SecondsToMinutes(int32_t time);

  /// [Extension]
  /// @brief Method TimeToBeat, addr 0x35b9da0, size 0x14, virtual false, abstract: false, final false
  static inline float_t TimeToBeat(float_t time, float_t bpm);

  /// [Extension]
  /// @brief Method ToUnixTime, addr 0x35b9f98, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t ToUnixTime(::System::DateTime dateTime);

  /// [Extension]
  /// @brief Method TotalDays, addr 0x35b9ecc, size 0x38, virtual false, abstract: false, final false
  static inline int32_t TotalDays(float_t time);

  /// [Extension]
  /// @brief Method TotalHours, addr 0x35b9f04, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TotalHours(float_t time);

  /// [Extension]
  /// @brief Method TotalMinutes, addr 0x35b9f40, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TotalMinutes(float_t time);

  /// [Extension]
  /// @brief Method TotalSeconds, addr 0x35b9f7c, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t TotalSeconds(float_t time);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeExtensions(TimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeExtensions(TimeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TimeExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
