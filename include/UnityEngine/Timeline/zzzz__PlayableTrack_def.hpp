#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(PlayableTrack)
namespace UnityEngine::Timeline {
class TimelineClip;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class PlayableTrack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::PlayableTrack);
// Type: UnityEngine.Timeline::PlayableTrack
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13862))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13913))
// CS Name: ::UnityEngine.Timeline::PlayableTrack*
class CORDL_TYPE PlayableTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  /// @brief Method OnCreateClip, addr 0x2c6e554, size 0x94, virtual true, abstract: false, final false
  inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip);

  static inline ::UnityEngine::Timeline::PlayableTrack* New_ctor();

  /// @brief Method .ctor, addr 0x2c6e5e8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayableTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableTrack(PlayableTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableTrack(PlayableTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableTrack();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::PlayableTrack, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::PlayableTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::PlayableTrack*, "UnityEngine.Timeline", "PlayableTrack");
