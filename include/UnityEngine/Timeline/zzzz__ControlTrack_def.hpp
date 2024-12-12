#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ControlTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(ControlTrack)
// Forward declare root types
namespace UnityEngine::Timeline {
class ControlTrack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ControlTrack);
// Dependencies UnityEngine.Timeline.TrackAsset
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ControlTrack
class CORDL_TYPE ControlTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::ControlTrack* New_ctor();

  /// @brief Method .ctor, addr 0x4822a14, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControlTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControlTrack(ControlTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControlTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControlTrack(ControlTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ControlTrack, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ControlTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ControlTrack*, "UnityEngine.Timeline", "ControlTrack");
