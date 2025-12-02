#pragma once
// IWYU pragma private; include "BeatGames/Analytics/Events/NavigationEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatGames/Analytics/Events/zzzz__BasePlatformSessionAnalyticsEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NavigationEvent)
// Forward declare root types
namespace BeatGames::Analytics::Events {
class NavigationEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatGames::Analytics::Events::NavigationEvent);
// Dependencies BeatGames.Analytics.Events.BasePlatformSessionAnalyticsEvent
namespace BeatGames::Analytics::Events {
// Is value type: false
// CS Name: BeatGames.Analytics.Events.NavigationEvent
class CORDL_TYPE NavigationEvent : public ::BeatGames::Analytics::Events::BasePlatformSessionAnalyticsEvent {
public:
  // Declarations
  /// @brief Field button_id, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_button_id, put = __cordl_internal_set_button_id)) ::StringW button_id;

  /// @brief Field content_id, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_content_id, put = __cordl_internal_set_content_id)) ::StringW content_id;

  /// @brief Field event, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_event, put = __cordl_internal_set_event)) ::StringW event;

  /// @brief Field screen_id, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_screen_id, put = __cordl_internal_set_screen_id)) ::StringW screen_id;

  static inline ::BeatGames::Analytics::Events::NavigationEvent* New_ctor();

  /// @brief Method ReturnEventToPool, addr 0x3161f30, size 0x74, virtual true, abstract: false, final false
  inline void ReturnEventToPool();

  /// @brief Method ReturnedToPool, addr 0x3161ee0, size 0x50, virtual true, abstract: false, final false
  inline void ReturnedToPool();

  /// @brief Method SetEventData, addr 0x3161474, size 0xc, virtual false, abstract: false, final false
  inline void SetEventData(::StringW buttonID, ::StringW screenID, ::StringW contentID, ::StringW eventType);

  constexpr ::StringW const& __cordl_internal_get_button_id() const;

  constexpr ::StringW& __cordl_internal_get_button_id();

  constexpr ::StringW const& __cordl_internal_get_content_id() const;

  constexpr ::StringW& __cordl_internal_get_content_id();

  constexpr ::StringW const& __cordl_internal_get_event() const;

  constexpr ::StringW& __cordl_internal_get_event();

  constexpr ::StringW const& __cordl_internal_get_screen_id() const;

  constexpr ::StringW& __cordl_internal_get_screen_id();

  constexpr void __cordl_internal_set_button_id(::StringW value);

  constexpr void __cordl_internal_set_content_id(::StringW value);

  constexpr void __cordl_internal_set_event(::StringW value);

  constexpr void __cordl_internal_set_screen_id(::StringW value);

  /// @brief Method .ctor, addr 0x3161e58, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationEvent(NavigationEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationEvent(NavigationEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22956 };

  /// @brief Field button_id, offset: 0x78, size: 0x8, def value: None
  ::StringW ___button_id;

  /// @brief Field screen_id, offset: 0x80, size: 0x8, def value: None
  ::StringW ___screen_id;

  /// @brief Field content_id, offset: 0x88, size: 0x8, def value: None
  ::StringW ___content_id;

  /// @brief Field event, offset: 0x90, size: 0x8, def value: None
  ::StringW ___event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatGames::Analytics::Events::NavigationEvent, ___button_id) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::NavigationEvent, ___screen_id) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::NavigationEvent, ___content_id) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatGames::Analytics::Events::NavigationEvent, ___event) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatGames::Analytics::Events::NavigationEvent, 0x98>, "Size mismatch!");

} // namespace BeatGames::Analytics::Events
NEED_NO_BOX(::BeatGames::Analytics::Events::NavigationEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatGames::Analytics::Events::NavigationEvent*, "BeatGames.Analytics.Events", "NavigationEvent");
