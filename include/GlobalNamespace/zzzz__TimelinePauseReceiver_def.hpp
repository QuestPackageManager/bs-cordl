#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelinePauseReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TimelinePauseReceiver)
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelinePauseReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimelinePauseReceiver);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Playables.INotificationReceiver
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimelinePauseReceiver
class CORDL_TYPE TimelinePauseReceiver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field timelinePauseEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_timelinePauseEvent, put = __cordl_internal_set_timelinePauseEvent)) ::System::Action* timelinePauseEvent;

  /// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
  constexpr operator ::UnityEngine::Playables::INotificationReceiver*() noexcept;

  static inline ::GlobalNamespace::TimelinePauseReceiver* New_ctor();

  /// @brief Method OnNotify, addr 0x39c4edc, size 0x94, virtual true, abstract: false, final true
  inline void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context);

  constexpr ::System::Action* const& __cordl_internal_get_timelinePauseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_timelinePauseEvent();

  constexpr void __cordl_internal_set_timelinePauseEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x39c4f70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_timelinePauseEvent, addr 0x39c4da4, size 0x9c, virtual false, abstract: false, final false
  inline void add_timelinePauseEvent(::System::Action* value);

  /// @brief Convert to "::UnityEngine::Playables::INotificationReceiver"
  constexpr ::UnityEngine::Playables::INotificationReceiver* i___UnityEngine__Playables__INotificationReceiver() noexcept;

  /// @brief Method remove_timelinePauseEvent, addr 0x39c4e40, size 0x9c, virtual false, abstract: false, final false
  inline void remove_timelinePauseEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelinePauseReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelinePauseReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelinePauseReceiver(TimelinePauseReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelinePauseReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelinePauseReceiver(TimelinePauseReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16463 };

  /// @brief Field timelinePauseEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___timelinePauseEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelinePauseReceiver, ___timelinePauseEvent) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelinePauseReceiver, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimelinePauseReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelinePauseReceiver*, "", "TimelinePauseReceiver");
