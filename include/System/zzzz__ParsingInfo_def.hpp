#pragma once
// IWYU pragma private; include "System/ParsingInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeParse_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParsingInfo)
namespace System::Globalization {
class Calendar;
}
namespace System {
class DateTimeParse_MatchNumberDelegate;
}
// Forward declare root types
namespace System {
struct ParsingInfo;
}
// Write type traits
MARK_VAL_T(::System::ParsingInfo);
// Dependencies System.DateTimeParse::TM
namespace System {
// Is value type: true
// CS Name: System.ParsingInfo
struct CORDL_TYPE ParsingInfo {
public:
  // Declarations
  /// @brief Method Init, addr 0x3de8c38, size 0xc, virtual false, abstract: false, final false
  inline void Init();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParsingInfo();

  // Ctor Parameters [CppParam { name: "calendar", ty: "::System::Globalization::Calendar*", modifiers: "", def_value: None }, CppParam { name: "dayOfWeek", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "timeMark", ty: "::System::DateTimeParse_TM", modifiers: "", def_value: None }, CppParam { name: "fUseHour12", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "fUseTwoDigitYear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fAllowInnerWhite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fAllowTrailingWhite",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fCustomNumberParser", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "parseNumberDelegate", ty:
  // "::System::DateTimeParse_MatchNumberDelegate*", modifiers: "", def_value: None }]
  constexpr ParsingInfo(::System::Globalization::Calendar* calendar, int32_t dayOfWeek, ::System::DateTimeParse_TM timeMark, bool fUseHour12, bool fUseTwoDigitYear, bool fAllowInnerWhite,
                        bool fAllowTrailingWhite, bool fCustomNumberParser, ::System::DateTimeParse_MatchNumberDelegate* parseNumberDelegate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2402 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field calendar, offset: 0x0, size: 0x8, def value: None
  ::System::Globalization::Calendar* calendar;

  /// @brief Field dayOfWeek, offset: 0x8, size: 0x4, def value: None
  int32_t dayOfWeek;

  /// @brief Field timeMark, offset: 0xc, size: 0x4, def value: None
  ::System::DateTimeParse_TM timeMark;

  /// @brief Field fUseHour12, offset: 0x10, size: 0x1, def value: None
  bool fUseHour12;

  /// @brief Field fUseTwoDigitYear, offset: 0x11, size: 0x1, def value: None
  bool fUseTwoDigitYear;

  /// @brief Field fAllowInnerWhite, offset: 0x12, size: 0x1, def value: None
  bool fAllowInnerWhite;

  /// @brief Field fAllowTrailingWhite, offset: 0x13, size: 0x1, def value: None
  bool fAllowTrailingWhite;

  /// @brief Field fCustomNumberParser, offset: 0x14, size: 0x1, def value: None
  bool fCustomNumberParser;

  /// @brief Field parseNumberDelegate, offset: 0x18, size: 0x8, def value: None
  ::System::DateTimeParse_MatchNumberDelegate* parseNumberDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ParsingInfo, calendar) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, dayOfWeek) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, timeMark) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, fUseHour12) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, fUseTwoDigitYear) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, fAllowInnerWhite) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, fAllowTrailingWhite) == 0x13, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, fCustomNumberParser) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::ParsingInfo, parseNumberDelegate) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ParsingInfo, 0x20>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ParsingInfo, "System", "ParsingInfo");
