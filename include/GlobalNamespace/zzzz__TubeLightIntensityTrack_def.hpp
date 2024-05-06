#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightIntensityTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightIntensityTrack)
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityTrack;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightIntensityTrack);
// Type: ::TubeLightIntensityTrack
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TubeLightIntensityTrack*
class CORDL_TYPE TubeLightIntensityTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::GlobalNamespace::TubeLightIntensityTrack* New_ctor();

  /// @brief Method .ctor, addr 0x269e00c, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightIntensityTrack, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightIntensityTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightIntensityTrack*, "", "TubeLightIntensityTrack");
