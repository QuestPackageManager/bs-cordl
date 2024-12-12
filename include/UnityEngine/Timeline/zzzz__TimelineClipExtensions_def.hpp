#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClipExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineClipExtensions)
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClipExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClipExtensions);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineClipExtensions
class CORDL_TYPE TimelineClipExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_UndoSetParentTrackText, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UndoSetParentTrackText, put = setStaticF_k_UndoSetParentTrackText)) ::StringW k_UndoSetParentTrackText;

  /// @brief Method MoveToTrack, addr 0x482c304, size 0x34c, virtual false, abstract: false, final false
  static inline void MoveToTrack(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack);

  /// @brief Method MoveToTrack_Impl, addr 0x482c650, size 0x120, virtual false, abstract: false, final false
  static inline void MoveToTrack_Impl(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack, ::UnityEngine::Object* asset,
                                      ::UnityEngine::Timeline::TrackAsset* parentTrack);

  /// @brief Method TryMoveToTrack, addr 0x482c770, size 0x19c, virtual false, abstract: false, final false
  static inline bool TryMoveToTrack(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack);

  static inline ::StringW getStaticF_k_UndoSetParentTrackText();

  static inline void setStaticF_k_UndoSetParentTrackText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClipExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineClipExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineClipExtensions(TimelineClipExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineClipExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineClipExtensions(TimelineClipExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15894 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClipExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClipExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClipExtensions*, "UnityEngine.Timeline", "TimelineClipExtensions");
