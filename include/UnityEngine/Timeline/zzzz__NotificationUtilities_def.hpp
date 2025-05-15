#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/NotificationUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NotificationUtilities)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class TimeNotificationBehaviour;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class NotificationUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::NotificationUtilities);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.NotificationUtilities
class CORDL_TYPE NotificationUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateNotificationsPlayable, addr 0x482d330, size 0x880, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
  CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers,
                              ::UnityEngine::Playables::IPlayableAsset* asset, ::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method CreateNotificationsPlayable, addr 0x482d324, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
  CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers,
                              ::UnityEngine::Playables::PlayableDirector* director);

  /// @brief Method CreateNotificationsPlayable, addr 0x482dbb0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
  CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers,
                              ::UnityEngine::Timeline::TimelineAsset* timelineAsset);

  /// @brief Method TrackTypeSupportsNotifications, addr 0x482dbb8, size 0x18c, virtual false, abstract: false, final false
  static inline bool TrackTypeSupportsNotifications(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotificationUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotificationUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotificationUtilities(NotificationUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotificationUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotificationUtilities(NotificationUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::NotificationUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::NotificationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotificationUtilities*, "UnityEngine.Timeline", "NotificationUtilities");
