#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(ActivationPlayableAsset)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationPlayableAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationPlayableAsset);
// Type: UnityEngine.Timeline::ActivationPlayableAsset
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ActivationPlayableAsset*
class CORDL_TYPE ActivationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x317a5c8, size 0x6c, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::UnityEngine::Timeline::ActivationPlayableAsset* New_ctor();

  /// @brief Method .ctor, addr 0x317a634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x317a5c0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationPlayableAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActivationPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationPlayableAsset(ActivationPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationPlayableAsset(ActivationPlayableAsset const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationPlayableAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ActivationPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationPlayableAsset*, "UnityEngine.Timeline", "ActivationPlayableAsset");
