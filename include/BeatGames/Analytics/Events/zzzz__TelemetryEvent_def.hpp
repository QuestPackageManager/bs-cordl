#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/TelemetryEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OSCE/Analytics/zzzz__BaseAnalyticsEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TelemetryEvent)
namespace GlobalNamespace {
struct IDType;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
// Forward declare root types
namespace BeatGames::Analytics::Events {
class TelemetryEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::TelemetryEvent);
// Dependencies OSCE.Analytics.BaseAnalyticsEvent
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.TelemetryEvent
class CORDL_TYPE TelemetryEvent : public ::OSCE::Analytics::BaseAnalyticsEvent {
public:
  // Declarations
  /// @brief Field client_version, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_client_version, put = __cordl_internal_set_client_version)) ::StringW client_version;

  /// @brief Field device_type, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_device_type, put = __cordl_internal_set_device_type)) ::StringW device_type;

  /// @brief Field duration_ms, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_duration_ms, put = __cordl_internal_set_duration_ms)) int64_t duration_ms;

  /// @brief Field event, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_event, put = __cordl_internal_set_event)) ::StringW event;

  /// @brief Field event_family, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_event_family, put = __cordl_internal_set_event_family)) ::StringW event_family;

  /// @brief Field event_time, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_event_time, put = __cordl_internal_set_event_time)) int64_t event_time;

  /// @brief Field game_client_session_id, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_game_client_session_id, put = __cordl_internal_set_game_client_session_id)) ::StringW game_client_session_id;

  /// @brief Field runtime_platform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_runtime_platform, put = __cordl_internal_set_runtime_platform)) ::StringW runtime_platform;

  /// @brief Field session_order, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_session_order, put = __cordl_internal_set_session_order)) int64_t session_order;

  /// @brief Field session_time, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_session_time, put = __cordl_internal_set_session_time)) int64_t session_time;

  /// @brief Field tags, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_tags, put = __cordl_internal_set_tags)) ::ArrayW<::StringW, ::Array<::StringW>*> tags;

  /// @brief Field time_since_session_start, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_time_since_session_start, put = __cordl_internal_set_time_since_session_start)) int64_t time_since_session_start;

  /// @brief Field value_int, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_value_int, put = __cordl_internal_set_value_int)) int64_t value_int;

  /// @brief Field value_string, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_value_string, put = __cordl_internal_set_value_string)) ::StringW value_string;

  /// @brief Field vros_major_version, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_vros_major_version, put = __cordl_internal_set_vros_major_version)) int32_t vros_major_version;

  /// @brief Method ApplyBasicFields, addr 0x3162244, size 0xf0, virtual true, abstract: false, final false
  inline void ApplyBasicFields(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method ApplyTime, addr 0x31621d8, size 0x6c, virtual true, abstract: false, final false
  inline void ApplyTime(::OSCE::Analytics::AnalyticsManager* manager);

  /// @brief Method GetIDType, addr 0x31621d0, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IDType GetIDType();

  static inline ::BeatGames::Analytics::Events::TelemetryEvent* New_ctor();

  /// @brief Method ReturnEventToPool, addr 0x3162334, size 0x74, virtual true, abstract: false, final false
  inline void ReturnEventToPool();

  constexpr ::StringW const& __cordl_internal_get_client_version() const;

  constexpr ::StringW& __cordl_internal_get_client_version();

  constexpr ::StringW const& __cordl_internal_get_device_type() const;

  constexpr ::StringW& __cordl_internal_get_device_type();

  constexpr int64_t const& __cordl_internal_get_duration_ms() const;

  constexpr int64_t& __cordl_internal_get_duration_ms();

  constexpr ::StringW const& __cordl_internal_get_event() const;

  constexpr ::StringW& __cordl_internal_get_event();

  constexpr ::StringW const& __cordl_internal_get_event_family() const;

  constexpr ::StringW& __cordl_internal_get_event_family();

  constexpr int64_t const& __cordl_internal_get_event_time() const;

  constexpr int64_t& __cordl_internal_get_event_time();

  constexpr ::StringW const& __cordl_internal_get_game_client_session_id() const;

  constexpr ::StringW& __cordl_internal_get_game_client_session_id();

  constexpr ::StringW const& __cordl_internal_get_runtime_platform() const;

  constexpr ::StringW& __cordl_internal_get_runtime_platform();

  constexpr int64_t const& __cordl_internal_get_session_order() const;

  constexpr int64_t& __cordl_internal_get_session_order();

  constexpr int64_t const& __cordl_internal_get_session_time() const;

  constexpr int64_t& __cordl_internal_get_session_time();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_tags() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_tags();

  constexpr int64_t const& __cordl_internal_get_time_since_session_start() const;

  constexpr int64_t& __cordl_internal_get_time_since_session_start();

  constexpr int64_t const& __cordl_internal_get_value_int() const;

  constexpr int64_t& __cordl_internal_get_value_int();

  constexpr ::StringW const& __cordl_internal_get_value_string() const;

  constexpr ::StringW& __cordl_internal_get_value_string();

  constexpr int32_t const& __cordl_internal_get_vros_major_version() const;

  constexpr int32_t& __cordl_internal_get_vros_major_version();

  constexpr void __cordl_internal_set_client_version(::StringW value);

  constexpr void __cordl_internal_set_device_type(::StringW value);

  constexpr void __cordl_internal_set_duration_ms(int64_t value);

  constexpr void __cordl_internal_set_event(::StringW value);

  constexpr void __cordl_internal_set_event_family(::StringW value);

  constexpr void __cordl_internal_set_event_time(int64_t value);

  constexpr void __cordl_internal_set_game_client_session_id(::StringW value);

  constexpr void __cordl_internal_set_runtime_platform(::StringW value);

  constexpr void __cordl_internal_set_session_order(int64_t value);

  constexpr void __cordl_internal_set_session_time(int64_t value);

  constexpr void __cordl_internal_set_tags(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_time_since_session_start(int64_t value);

  constexpr void __cordl_internal_set_value_int(int64_t value);

  constexpr void __cordl_internal_set_value_string(::StringW value);

  constexpr void __cordl_internal_set_vros_major_version(int32_t value);

  /// @brief Method .ctor, addr 0x31623a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TelemetryEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TelemetryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TelemetryEvent(TelemetryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TelemetryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TelemetryEvent(TelemetryEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22959 };

  /// @brief Field event, offset: 0x28, size: 0x8, def value: None
  ::StringW ___event;

  /// @brief Field event_time, offset: 0x30, size: 0x8, def value: None
  int64_t ___event_time;

  /// @brief Field event_family, offset: 0x38, size: 0x8, def value: None
  ::StringW ___event_family;

  /// @brief Field duration_ms, offset: 0x40, size: 0x8, def value: None
  int64_t ___duration_ms;

  /// @brief Field value_string, offset: 0x48, size: 0x8, def value: None
  ::StringW ___value_string;

  /// @brief Field value_int, offset: 0x50, size: 0x8, def value: None
  int64_t ___value_int;

  /// @brief Field device_type, offset: 0x58, size: 0x8, def value: None
  ::StringW ___device_type;

  /// @brief Field vros_major_version, offset: 0x60, size: 0x4, def value: None
  int32_t ___vros_major_version;

  /// @brief Field runtime_platform, offset: 0x68, size: 0x8, def value: None
  ::StringW ___runtime_platform;

  /// @brief Field client_version, offset: 0x70, size: 0x8, def value: None
  ::StringW ___client_version;

  /// @brief Field game_client_session_id, offset: 0x78, size: 0x8, def value: None
  ::StringW ___game_client_session_id;

  /// @brief Field session_time, offset: 0x80, size: 0x8, def value: None
  int64_t ___session_time;

  /// @brief Field session_order, offset: 0x88, size: 0x8, def value: None
  int64_t ___session_order;

  /// @brief Field time_since_session_start, offset: 0x90, size: 0x8, def value: None
  int64_t ___time_since_session_start;

  /// @brief Field tags, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___tags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___event) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___event_time) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___event_family) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___duration_ms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___value_string) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___value_int) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___device_type) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___vros_major_version) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___runtime_platform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___client_version) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___game_client_session_id) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___session_time) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___session_order) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___time_since_session_start) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::TelemetryEvent, ___tags) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::TelemetryEvent, 0xa0>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::TelemetryEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::TelemetryEvent*, "BeatGames.Analytics.Events", "TelemetryEvent");
