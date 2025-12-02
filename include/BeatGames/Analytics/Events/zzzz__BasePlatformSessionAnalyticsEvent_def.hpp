#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/BasePlatformSessionAnalyticsEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OSCE/Analytics/zzzz__UserSessionAnalyticsEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasePlatformSessionAnalyticsEvent)
namespace GlobalNamespace {
struct IDType;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatGames::Analytics::Events {
class BasePlatformSessionAnalyticsEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent);
// Dependencies OSCE.Analytics.UserSessionAnalyticsEvent
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.BasePlatformSessionAnalyticsEvent
class CORDL_TYPE BasePlatformSessionAnalyticsEvent : public ::OSCE::Analytics::UserSessionAnalyticsEvent {
public:
  // Declarations
  /// @brief Field client_version, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_client_version, put = __cordl_internal_set_client_version)) ::StringW client_version;

  /// @brief Field device_type, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_device_type, put = __cordl_internal_set_device_type)) ::StringW device_type;

  /// @brief Field event_time, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_event_time, put = __cordl_internal_set_event_time)) float_t event_time;

  /// @brief Field game_client_session_id, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_game_client_session_id, put = __cordl_internal_set_game_client_session_id)) ::StringW game_client_session_id;

  /// @brief Field runtime_platform, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_runtime_platform, put = __cordl_internal_set_runtime_platform)) ::StringW runtime_platform;

  /// @brief Field time_since_session_start, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_time_since_session_start, put = __cordl_internal_set_time_since_session_start)) int64_t time_since_session_start;

  /// @brief Field vros_major_version, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_vros_major_version, put = __cordl_internal_set_vros_major_version)) int32_t vros_major_version;

  /// @brief Method ApplyBasicFields, addr 0x3161640, size 0xb8, virtual true, abstract: false, final false
  inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method ApplyTime, addr 0x3161604, size 0x3c, virtual true, abstract: false, final false
  inline void ApplyTime(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method EventRequiresAnalyticsID, addr 0x31615e0, size 0x8, virtual true, abstract: false, final false
  inline bool EventRequiresAnalyticsID();

  /// @brief Method GetIDType, addr 0x31615d8, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IDType GetIDType();

  static inline ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent* New_ctor();

  /// @brief Method ReturnedToPool, addr 0x31615e8, size 0x1c, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  constexpr ::StringW const& __cordl_internal_get_client_version() const;

  constexpr ::StringW& __cordl_internal_get_client_version();

  constexpr ::StringW const& __cordl_internal_get_device_type() const;

  constexpr ::StringW& __cordl_internal_get_device_type();

  constexpr float_t const& __cordl_internal_get_event_time() const;

  constexpr float_t& __cordl_internal_get_event_time();

  constexpr ::StringW const& __cordl_internal_get_game_client_session_id() const;

  constexpr ::StringW& __cordl_internal_get_game_client_session_id();

  constexpr ::StringW const& __cordl_internal_get_runtime_platform() const;

  constexpr ::StringW& __cordl_internal_get_runtime_platform();

  constexpr int64_t const& __cordl_internal_get_time_since_session_start() const;

  constexpr int64_t& __cordl_internal_get_time_since_session_start();

  constexpr int32_t const& __cordl_internal_get_vros_major_version() const;

  constexpr int32_t& __cordl_internal_get_vros_major_version();

  constexpr void __cordl_internal_set_client_version(::StringW value);

  constexpr void __cordl_internal_set_device_type(::StringW value);

  constexpr void __cordl_internal_set_event_time(float_t value);

  constexpr void __cordl_internal_set_game_client_session_id(::StringW value);

  constexpr void __cordl_internal_set_runtime_platform(::StringW value);

  constexpr void __cordl_internal_set_time_since_session_start(int64_t value);

  constexpr void __cordl_internal_set_vros_major_version(int32_t value);

  /// @brief Method .ctor, addr 0x3161b28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePlatformSessionAnalyticsEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasePlatformSessionAnalyticsEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePlatformSessionAnalyticsEvent(BasePlatformSessionAnalyticsEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePlatformSessionAnalyticsEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePlatformSessionAnalyticsEvent(BasePlatformSessionAnalyticsEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22951 };

  /// @brief Field event_time, offset: 0x44, size: 0x4, def value: None
  float_t ___event_time;

  /// @brief Field client_version, offset: 0x48, size: 0x8, def value: None
  ::StringW ___client_version;

  /// @brief Field game_client_session_id, offset: 0x50, size: 0x8, def value: None
  ::StringW ___game_client_session_id;

  /// @brief Field runtime_platform, offset: 0x58, size: 0x8, def value: None
  ::StringW ___runtime_platform;

  /// @brief Field vros_major_version, offset: 0x60, size: 0x4, def value: None
  int32_t ___vros_major_version;

  /// @brief Field device_type, offset: 0x68, size: 0x8, def value: None
  ::StringW ___device_type;

  /// @brief Field time_since_session_start, offset: 0x70, size: 0x8, def value: None
  int64_t ___time_since_session_start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___event_time) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___client_version) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___game_client_session_id) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___runtime_platform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___vros_major_version) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___device_type) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, ___time_since_session_start) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent, 0x78>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent*, "BeatGames.Analytics.Events", "BasePlatformSessionAnalyticsEvent");
