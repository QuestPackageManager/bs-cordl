#pragma once
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
// Type: ::TubeLightTrack
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TubeLightTrack*
class CORDL_TYPE TubeLightTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::GlobalNamespace::TubeLightTrack* New_ctor();

  /// @brief Method .ctor, addr 0x269e064, size 0x58, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightTrack, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightTrack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightTrack*, "", "TubeLightTrack");
