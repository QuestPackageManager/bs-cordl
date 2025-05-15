#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightTrack)
// Forward declare root types
namespace GlobalNamespace {
class TubeLightTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightTrack);
// Dependencies UnityEngine.Timeline.TrackAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeLightTrack
class CORDL_TYPE TubeLightTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::GlobalNamespace::TubeLightTrack* New_ctor();

  /// @brief Method .ctor, addr 0x3b36704, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeLightTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightTrack(TubeLightTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightTrack(TubeLightTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightTrack, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightTrack*, "", "TubeLightTrack");
