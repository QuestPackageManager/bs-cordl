#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/SessionEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SessionEvent)
namespace GlobalNamespace {
struct IDType;
}
// Forward declare root types
namespace BeatGames::Analytics::Events {
class SessionEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::SessionEvent);
// Dependencies BeatGames.Analytics.Events.BasePlatformSessionAnalyticsEvent
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.SessionEvent
class CORDL_TYPE SessionEvent : public ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent {
public:
  // Declarations
  /// @brief Field event_type, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_event_type, put = __cordl_internal_set_event_type)) ::StringW event_type;

  /// @brief Method GetIDType, addr 0x3191df0, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IDType GetIDType();

  static inline ::BeatGames::Analytics::Events::SessionEvent* New_ctor();

  /// @brief Method ReturnEventToPool, addr 0x3191df8, size 0x74, virtual true, abstract: false, final false
  inline void ReturnEventToPool();

  /// @brief Method ReturnedToPool, addr 0x3191e6c, size 0x5c, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  constexpr ::StringW const& __cordl_internal_get_event_type() const;

  constexpr ::StringW& __cordl_internal_get_event_type();

  constexpr void __cordl_internal_set_event_type(::StringW value);

  /// @brief Method .ctor, addr 0x3191d8c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SessionEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SessionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SessionEvent(SessionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SessionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SessionEvent(SessionEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22984 };

  /// @brief Field event_type, offset: 0x78, size: 0x8, def value: None
  ::StringW ___event_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::Events::SessionEvent, ___event_type) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::SessionEvent, 0x80>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::SessionEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::SessionEvent*, "BeatGames.Analytics.Events", "SessionEvent");
