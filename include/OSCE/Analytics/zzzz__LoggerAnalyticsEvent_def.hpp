#pragma once
// IWYU pragma private; include "OSCE/Analytics/LoggerAnalyticsEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoggerAnalyticsEvent)
// Forward declare root types
namespace OSCE::Analytics {
struct LoggerAnalyticsEvent;
}
// Write type traits
MARK_VAL_T(::OSCE::Analytics::LoggerAnalyticsEvent);
// Dependencies
namespace OSCE::Analytics {
// Is value type: true
// CS Name: OSCE.Analytics.LoggerAnalyticsEvent
struct CORDL_TYPE LoggerAnalyticsEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoggerAnalyticsEvent();

  // Ctor Parameters [CppParam { name: "logger", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "analytics_event", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr LoggerAnalyticsEvent(::StringW logger, ::StringW analytics_event) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21692 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field logger, offset: 0x0, size: 0x8, def value: None
  ::StringW logger;

  /// @brief Field analytics_event, offset: 0x8, size: 0x8, def value: None
  ::StringW analytics_event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::LoggerAnalyticsEvent, logger) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::LoggerAnalyticsEvent, analytics_event) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::LoggerAnalyticsEvent, 0x10>, "Size mismatch!");

} // namespace OSCE::Analytics
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::LoggerAnalyticsEvent, "OSCE.Analytics", "LoggerAnalyticsEvent");
