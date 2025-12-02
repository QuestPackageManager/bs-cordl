#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/TelemetryEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryEventSender)
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatGames::Analytics::Events {
class TelemetryEventSender;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::TelemetryEventSender);
// Dependencies System.Object
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.TelemetryEventSender
class CORDL_TYPE TelemetryEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _analyticsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsManager, put = __cordl_internal_set__analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager> _analyticsManager;

  static inline ::BeatGames::Analytics::Events::TelemetryEventSender* New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager);

  /// @brief Method SendTelemetryEvent, addr 0x3161cbc, size 0xf0, virtual false, abstract: false, final false
  inline void SendTelemetryEvent(::StringW eventName, ::StringW eventFamily, ::StringW stringValue, int32_t intValue, int32_t durationMS, ::ArrayW<::StringW, ::Array<::StringW>*> tags);

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__analyticsManager() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__analyticsManager();

  constexpr void __cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  /// @brief Method .ctor, addr 0x3161318, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryEventSender(TelemetryEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryEventSender(TelemetryEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22954 };

  /// @brief Field _analyticsManager, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ____analyticsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEventSender, ____analyticsManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::TelemetryEventSender, 0x18>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::TelemetryEventSender);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::TelemetryEventSender*, "BeatGames.Analytics.Events", "TelemetryEventSender");
