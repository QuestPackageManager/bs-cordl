#pragma once
// IWYU pragma private; include "GlobalNamespace\TubeLightIntensityTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightIntensityTrack)
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityTrack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TubeLightIntensityTrack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TubeLightIntensityTrack*, "", "TubeLightIntensityTrack");
// Dependencies UnityEngine.Timeline.TrackAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeLightIntensityTrack
class CORDL_TYPE TubeLightIntensityTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::GlobalNamespace::TubeLightIntensityTrack* New_ctor();

  /// @brief Method .ctor, addr 0x590b520, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightIntensityTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightIntensityTrack(TubeLightIntensityTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightIntensityTrack(TubeLightIntensityTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TubeLightIntensityTrack) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
