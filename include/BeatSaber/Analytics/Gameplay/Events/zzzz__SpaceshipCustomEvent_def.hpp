#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Gameplay/Events/SpaceshipCustomEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Analytics/Gameplay/Events/zzzz__SpaceshipUserEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpaceshipCustomEvent)
// Forward declare root types
namespace BeatSaber::Analytics::Gameplay::Events {
class SpaceshipCustomEvent;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent);
// Dependencies BeatSaber.Analytics.Gameplay.Events.SpaceshipUserEventBase
namespace BeatSaber::Analytics::Gameplay::Events {
// Is value type: false
// CS Name: BeatSaber.Analytics.Gameplay.Events.SpaceshipCustomEvent
class CORDL_TYPE SpaceshipCustomEvent : public ::BeatSaber::Analytics::Gameplay::Events::SpaceshipUserEventBase {
public:
  // Declarations
  /// @brief Field event_type, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_event_type, put = __cordl_internal_set_event_type)) ::StringW event_type;

  /// @brief Field payload, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_payload, put = __cordl_internal_set_payload)) ::StringW payload;

  static inline ::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_event_type() const;

  constexpr ::StringW& __cordl_internal_get_event_type();

  constexpr ::StringW const& __cordl_internal_get_payload() const;

  constexpr ::StringW& __cordl_internal_get_payload();

  constexpr void __cordl_internal_set_event_type(::StringW value);

  constexpr void __cordl_internal_set_payload(::StringW value);

  /// @brief Method .ctor, addr 0x31cda5c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpaceshipCustomEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipCustomEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpaceshipCustomEvent(SpaceshipCustomEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpaceshipCustomEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpaceshipCustomEvent(SpaceshipCustomEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22102 };

  /// @brief Field payload, offset: 0x68, size: 0x8, def value: None
  ::StringW ___payload;

  /// @brief Field event_type, offset: 0x70, size: 0x8, def value: None
  ::StringW ___event_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent, ___payload) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent, ___event_type) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent, 0x78>, "Size mismatch!");

} // namespace BeatSaber::Analytics::Gameplay::Events
NEED_NO_BOX(::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Analytics::Gameplay::Events::SpaceshipCustomEvent*, "BeatSaber.Analytics.Gameplay.Events", "SpaceshipCustomEvent");
