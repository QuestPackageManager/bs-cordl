#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\GroupTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
CORDL_MODULE_EXPORT(GroupTrack)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class GroupTrack;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::GroupTrack*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::GroupTrack*, "UnityEngine.Timeline", "GroupTrack");
// Dependencies UnityEngine.Timeline.TrackAsset
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.GroupTrack
class CORDL_TYPE GroupTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  /// @brief Method CanCompileClips, addr 0x69c7db8, size 0x8, virtual true, abstract: false, final false
  inline bool CanCompileClips();

  static inline ::UnityEngine::Timeline::GroupTrack* New_ctor();

  /// @brief Method .ctor, addr 0x69c7e1c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_outputs, addr 0x69c7dc0, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupTrack(GroupTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupTrack(GroupTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19221 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::GroupTrack) == 0xa0, "Size mismatch!");

} // namespace UnityEngine::Timeline
