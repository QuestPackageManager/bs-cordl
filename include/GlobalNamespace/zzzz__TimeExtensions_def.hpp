#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeExtensions)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimeExtensions);
// Type: ::TimeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TimeExtensions*
class CORDL_TYPE TimeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AsUnixTime, addr 0x107c730, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::DateTime AsUnixTime(int64_t unixTime);

  /// @brief Method DaysToSeconds, addr 0x107c4f0, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DaysToSeconds(int32_t days);

  /// @brief Method Hours, addr 0x107c518, size 0x80, virtual false, abstract: false, final false
  static inline int32_t Hours(float_t time);

  /// @brief Method HoursToSeconds, addr 0x107c500, size 0xc, virtual false, abstract: false, final false
  static inline int32_t HoursToSeconds(int32_t hours);

  /// @brief Method Milliseconds, addr 0x107c418, size 0x38, virtual false, abstract: false, final false
  static inline int32_t Milliseconds(float_t time);

  /// @brief Method MinSecDurationText, addr 0x107c0ac, size 0x1cc, virtual false, abstract: false, final false
  static inline ::StringW MinSecDurationText(float_t duration);

  /// @brief Method MinSecMillisecDurationText, addr 0x107c324, size 0xf4, virtual false, abstract: false, final false
  static inline ::StringW MinSecMillisecDurationText(float_t duration);

  /// @brief Method Minutes, addr 0x107c278, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Minutes(float_t time);

  /// @brief Method MinutesToSeconds, addr 0x107c50c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t MinutesToSeconds(int32_t minutes);

  /// @brief Method OneBeatDuration, addr 0x107c450, size 0x1c, virtual false, abstract: false, final false
  static inline float_t OneBeatDuration(float_t bpm);

  /// @brief Method Seconds, addr 0x107c2f4, size 0x30, virtual false, abstract: false, final false
  static inline int32_t Seconds(float_t time);

  /// @brief Method SecondsToDays, addr 0x107c490, size 0x20, virtual false, abstract: false, final false
  static inline int32_t SecondsToDays(int32_t time);

  /// @brief Method SecondsToHours, addr 0x107c4b0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t SecondsToHours(int32_t time);

  /// @brief Method SecondsToMinutes, addr 0x107c480, size 0x10, virtual false, abstract: false, final false
  static inline float_t SecondsToMinutes(float_t seconds);

  /// @brief Method SecondsToMinutes, addr 0x107c4d0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t SecondsToMinutes(int32_t time);

  /// @brief Method TimeToBeat, addr 0x107c46c, size 0x14, virtual false, abstract: false, final false
  static inline float_t TimeToBeat(float_t time, float_t bpm);

  /// @brief Method ToUnixTime, addr 0x107c664, size 0xcc, virtual false, abstract: false, final false
  static inline int64_t ToUnixTime(::System::DateTime dateTime);

  /// @brief Method TotalDays, addr 0x107c598, size 0x38, virtual false, abstract: false, final false
  static inline int32_t TotalDays(float_t time);

  /// @brief Method TotalHours, addr 0x107c5d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TotalHours(float_t time);

  /// @brief Method TotalMinutes, addr 0x107c60c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t TotalMinutes(float_t time);

  /// @brief Method TotalSeconds, addr 0x107c648, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t TotalSeconds(float_t time);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeExtensions(TimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeExtensions(TimeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeExtensions*, "", "TimeExtensions");
