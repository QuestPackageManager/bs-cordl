#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightAsset)
namespace GlobalNamespace {
class TubeLightBehaviour;
}
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
namespace GlobalNamespace {
class TubeLightAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightAsset);
// Dependencies UnityEngine.Playables.PlayableAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeLightAsset
class CORDL_TYPE TubeLightAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field _template, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__template, put = __cordl_internal_set__template)) ::GlobalNamespace::TubeLightBehaviour* _template;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x571882c, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::TubeLightAsset* New_ctor();

  constexpr ::GlobalNamespace::TubeLightBehaviour* const& __cordl_internal_get__template() const;

  constexpr ::GlobalNamespace::TubeLightBehaviour*& __cordl_internal_get__template();

  constexpr void __cordl_internal_set__template(::GlobalNamespace::TubeLightBehaviour* value);

  /// @brief Method .ctor, addr 0x57188e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x5718824, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeLightAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightAsset(TubeLightAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightAsset(TubeLightAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6790 };

  /// @brief Field _template, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TubeLightBehaviour* ____template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeLightAsset, ____template) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightAsset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightAsset*, "", "TubeLightAsset");
