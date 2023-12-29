#pragma once
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
// Type: UnityEngine.Timeline::ControlTrack
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14146))
// CS Name: ::UnityEngine.Timeline::ControlTrack*
class CORDL_TYPE ControlTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::ControlTrack* New_ctor();

  /// @brief Method .ctor addr 0x2ae31c8 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ControlTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControlTrack(ControlTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControlTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControlTrack(ControlTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlTrack();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ControlTrack, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ControlTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ControlTrack*, "UnityEngine.Timeline", "ControlTrack");
