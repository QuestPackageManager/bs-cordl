#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MarkerTrack.hpp"
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
// Dependencies UnityEngine.Timeline.TrackAsset
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.MarkerTrack
class CORDL_TYPE MarkerTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  static inline ::UnityEngine::Timeline::MarkerTrack* New_ctor();

  /// @brief Method .ctor, addr 0x4825ec4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_outputs, addr 0x4825ce0, size 0x1e4, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkerTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MarkerTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MarkerTrack(MarkerTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MarkerTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MarkerTrack(MarkerTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15857 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MarkerTrack, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::MarkerTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MarkerTrack*, "UnityEngine.Timeline", "MarkerTrack");
