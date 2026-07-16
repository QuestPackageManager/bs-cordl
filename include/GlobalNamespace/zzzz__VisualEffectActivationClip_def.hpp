#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualEffectActivationClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(VisualEffectActivationClip)
namespace GlobalNamespace {
class VisualEffectActivationBehaviour;
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
class VisualEffectActivationClip;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VisualEffectActivationClip*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualEffectActivationClip*, "", "VisualEffectActivationClip");
// Dependencies UnityEngine.Playables.PlayableAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: VisualEffectActivationClip
class CORDL_TYPE VisualEffectActivationClip : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field activationBehavior, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activationBehavior, put = __cordl_internal_set_activationBehavior)) ::GlobalNamespace::VisualEffectActivationBehaviour* activationBehavior;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x69cbcf4, size 0xf0, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);

  static inline ::GlobalNamespace::VisualEffectActivationClip* New_ctor();

  constexpr ::GlobalNamespace::VisualEffectActivationBehaviour* const& __cordl_internal_get_activationBehavior() const;

  constexpr ::GlobalNamespace::VisualEffectActivationBehaviour*& __cordl_internal_get_activationBehavior();

  constexpr void __cordl_internal_set_activationBehavior(::GlobalNamespace::VisualEffectActivationBehaviour* value);

  /// @brief Method .ctor, addr 0x69cbde4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x69cbcec, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectActivationClip();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectActivationClip", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualEffectActivationClip(VisualEffectActivationClip&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualEffectActivationClip", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualEffectActivationClip(VisualEffectActivationClip const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19885 };

  /// @brief Field activationBehavior, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::VisualEffectActivationBehaviour* ___activationBehavior;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualEffectActivationClip, ___activationBehavior) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualEffectActivationClip) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
