#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(MarkerTrack)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class MarkerTrack;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::MarkerTrack);
// Type: UnityEngine.Timeline::MarkerTrack
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14133))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14161))
// CS Name: ::UnityEngine.Timeline::MarkerTrack*
class CORDL_TYPE MarkerTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  /// @brief Method get_outputs addr 0x2ae4df0 size 0x1e4 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  static inline ::UnityEngine::Timeline::MarkerTrack* New_ctor();

  /// @brief Method .ctor addr 0x2ae4fd4 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MarkerTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarkerTrack(MarkerTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarkerTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarkerTrack(MarkerTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkerTrack();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MarkerTrack, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::MarkerTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MarkerTrack*, "UnityEngine.Timeline", "MarkerTrack");
