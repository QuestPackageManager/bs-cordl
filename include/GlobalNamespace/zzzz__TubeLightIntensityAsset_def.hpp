#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightIntensityAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightIntensityAsset)
namespace GlobalNamespace {
class TubeLightIntensityBehaviour;
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightIntensityAsset);
// Dependencies UnityEngine.Playables.PlayableAsset, UnityEngine.Timeline.ITimelineClipAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: TubeLightIntensityAsset
class CORDL_TYPE TubeLightIntensityAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field _template, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__template, put = __cordl_internal_set__template)) ::GlobalNamespace::TubeLightIntensityBehaviour* _template;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x3b35d34, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::TubeLightIntensityAsset* New_ctor();

  constexpr ::GlobalNamespace::TubeLightIntensityBehaviour* const& __cordl_internal_get__template() const;

  constexpr ::GlobalNamespace::TubeLightIntensityBehaviour*& __cordl_internal_get__template();

  constexpr void __cordl_internal_set__template(::GlobalNamespace::TubeLightIntensityBehaviour* value);

  /// @brief Method .ctor, addr 0x3b35ddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x3b35d2c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightIntensityAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightIntensityAsset(TubeLightIntensityAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightIntensityAsset(TubeLightIntensityAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5214 };

  /// @brief Field _template, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TubeLightIntensityBehaviour* ____template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TubeLightIntensityAsset, ____template) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightIntensityAsset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightIntensityAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightIntensityAsset*, "", "TubeLightIntensityAsset");
