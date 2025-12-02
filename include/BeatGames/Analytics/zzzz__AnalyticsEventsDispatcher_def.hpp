#pragma once
// IWYU pragma private; include "BeatGames/Analytics/AnalyticsEventsDispatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnalyticsEventsDispatcher)
namespace BeatGames::Analytics::Events {
class SessionEventSender;
}
namespace BeatGames::Analytics::Events {
class TelemetryEventSender;
}
namespace BeatGames::Analytics {
class NavigationEventSender;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatGames::Analytics {
class AnalyticsEventsDispatcher;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::AnalyticsEventsDispatcher);
// Dependencies System.Object
namespace BeatGames::Analytics {
// Is value type: false
// CS Name: BeatGames.Analytics.AnalyticsEventsDispatcher
class CORDL_TYPE AnalyticsEventsDispatcher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Navigation)) ::BeatGames::Analytics::NavigationEventSender* Navigation;

  __declspec(property(get = get_Session)) ::BeatGames::Analytics::Events::SessionEventSender* Session;

  __declspec(property(get = get_Telemetry)) ::BeatGames::Analytics::Events::TelemetryEventSender* Telemetry;

  /// @brief Field _analyticsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsManager, put = __cordl_internal_set__analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager> _analyticsManager;

  /// @brief Field _navigationEventSender, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__navigationEventSender, put = __cordl_internal_set__navigationEventSender)) ::BeatGames::Analytics::NavigationEventSender* _navigationEventSender;

  /// @brief Field _sessionEventSender, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionEventSender, put = __cordl_internal_set__sessionEventSender)) ::BeatGames::Analytics::Events::SessionEventSender* _sessionEventSender;

  /// @brief Field _telemetryEventSender, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__telemetryEventSender, put = __cordl_internal_set__telemetryEventSender)) ::BeatGames::Analytics::Events::TelemetryEventSender* _telemetryEventSender;

  static inline ::BeatGames::Analytics::AnalyticsEventsDispatcher* New_ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::StringW oculusAuthToken);

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get__analyticsManager() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get__analyticsManager();

  constexpr ::BeatGames::Analytics::NavigationEventSender* const& __cordl_internal_get__navigationEventSender() const;

  constexpr ::BeatGames::Analytics::NavigationEventSender*& __cordl_internal_get__navigationEventSender();

  constexpr ::BeatGames::Analytics::Events::SessionEventSender* const& __cordl_internal_get__sessionEventSender() const;

  constexpr ::BeatGames::Analytics::Events::SessionEventSender*& __cordl_internal_get__sessionEventSender();

  constexpr ::BeatGames::Analytics::Events::TelemetryEventSender* const& __cordl_internal_get__telemetryEventSender() const;

  constexpr ::BeatGames::Analytics::Events::TelemetryEventSender*& __cordl_internal_get__telemetryEventSender();

  constexpr void __cordl_internal_set__analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  constexpr void __cordl_internal_set__navigationEventSender(::BeatGames::Analytics::NavigationEventSender* value);

  constexpr void __cordl_internal_set__sessionEventSender(::BeatGames::Analytics::Events::SessionEventSender* value);

  constexpr void __cordl_internal_set__telemetryEventSender(::BeatGames::Analytics::Events::TelemetryEventSender* value);

  /// @brief Method .ctor, addr 0x3161190, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::OSCE::Analytics::AnalyticsManager* analyticsManager, ::StringW oculusAuthToken);

  /// @brief Method get_Navigation, addr 0x3161178, size 0x8, virtual false, abstract: false, final false
  inline ::BeatGames::Analytics::NavigationEventSender* get_Navigation();

  /// @brief Method get_Session, addr 0x3161180, size 0x8, virtual false, abstract: false, final false
  inline ::BeatGames::Analytics::Events::SessionEventSender* get_Session();

  /// @brief Method get_Telemetry, addr 0x3161188, size 0x8, virtual false, abstract: false, final false
  inline ::BeatGames::Analytics::Events::TelemetryEventSender* get_Telemetry();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsEventsDispatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsEventsDispatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnalyticsEventsDispatcher(AnalyticsEventsDispatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnalyticsEventsDispatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnalyticsEventsDispatcher(AnalyticsEventsDispatcher const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22949 };

  /// @brief Field _navigationEventSender, offset: 0x10, size: 0x8, def value: None
  ::BeatGames::Analytics::NavigationEventSender* ____navigationEventSender;

  /// @brief Field _sessionEventSender, offset: 0x18, size: 0x8, def value: None
  ::BeatGames::Analytics::Events::SessionEventSender* ____sessionEventSender;

  /// @brief Field _analyticsManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ____analyticsManager;

  /// @brief Field _telemetryEventSender, offset: 0x28, size: 0x8, def value: None
  ::BeatGames::Analytics::Events::TelemetryEventSender* ____telemetryEventSender;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::AnalyticsEventsDispatcher, ____navigationEventSender) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::AnalyticsEventsDispatcher, ____sessionEventSender) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::AnalyticsEventsDispatcher, ____analyticsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::AnalyticsEventsDispatcher, ____telemetryEventSender) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::AnalyticsEventsDispatcher, 0x30>, "Size mismatch!");

} // namespace BeatGames::Analytics
NEED_NO_BOX(::BeatGames::Analytics::AnalyticsEventsDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::AnalyticsEventsDispatcher*, "BeatGames.Analytics", "AnalyticsEventsDispatcher");
