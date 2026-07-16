#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableGraphExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableGraphExtensions)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableGraphExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimationPlayableGraphExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationPlayableGraphExtensions*, "UnityEngine.Animations", "AnimationPlayableGraphExtensions");
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimationPlayableGraphExtensions
class CORDL_TYPE AnimationPlayableGraphExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method InternalCreateAnimationOutput, addr 0x6a43c7c, size 0x148, virtual false, abstract: false, final false
  static inline bool InternalCreateAnimationOutput(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle);

  /// @brief Method InternalCreateAnimationOutput_Injected, addr 0x6a43dc4, size 0x54, virtual false, abstract: false, final false
  static inline bool InternalCreateAnimationOutput_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                            ::by_ref<::UnityEngine::Playables::PlayableOutputHandle> handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableGraphExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimationPlayableGraphExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Animations
