#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineClipCapsExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TimelineClipCapsExtensions)
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineClipCapsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineClipCapsExtensions);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineClipCapsExtensions
class CORDL_TYPE TimelineClipCapsExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method HasAll, addr 0x481b44c, size 0xc, virtual false, abstract: false, final false
  static inline bool HasAll(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags);

  /// @brief Method HasAny, addr 0x480df60, size 0xc, virtual false, abstract: false, final false
  static inline bool HasAny(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags);

  /// @brief Method SupportsBlending, addr 0x481b434, size 0x18, virtual false, abstract: false, final false
  static inline bool SupportsBlending(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method SupportsClipIn, addr 0x481b404, size 0x18, virtual false, abstract: false, final false
  static inline bool SupportsClipIn(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method SupportsExtrapolation, addr 0x481b3ec, size 0x18, virtual false, abstract: false, final false
  static inline bool SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method SupportsLooping, addr 0x481b3d4, size 0x18, virtual false, abstract: false, final false
  static inline bool SupportsLooping(::UnityEngine::Timeline::TimelineClip* clip);

  /// @brief Method SupportsSpeedMultiplier, addr 0x481b41c, size 0x18, virtual false, abstract: false, final false
  static inline bool SupportsSpeedMultiplier(::UnityEngine::Timeline::TimelineClip* clip);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineClipCapsExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineClipCapsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineClipCapsExtensions(TimelineClipCapsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineClipCapsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineClipCapsExtensions(TimelineClipCapsExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineClipCapsExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClipCapsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClipCapsExtensions*, "UnityEngine.Timeline", "TimelineClipCapsExtensions");
