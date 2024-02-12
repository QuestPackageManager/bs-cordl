#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NotificationUtilities)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
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
// Forward declare root types
namespace UnityEngine::Timeline {
class NotificationUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::NotificationUtilities);
// Type: UnityEngine.Timeline::NotificationUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13888))
// CS Name: ::UnityEngine.Timeline::NotificationUtilities*
class CORDL_TYPE NotificationUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateNotificationsPlayable, addr 0x2c6d91c, size 0x6e0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
  CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* markers, double_t duration,
                              ::UnityEngine::Playables::DirectorWrapMode extrapolationMode);

  /// @brief Method TrackTypeSupportsNotifications, addr 0x2c6dffc, size 0x18c, virtual false, abstract: false, final false
  static inline bool TrackTypeSupportsNotifications(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "NotificationUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotificationUtilities(NotificationUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotificationUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotificationUtilities(NotificationUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotificationUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::NotificationUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::NotificationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotificationUtilities*, "UnityEngine.Timeline", "NotificationUtilities");
