#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableGraphExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableGraphExtensions)
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
MARK_REF_PTR_T(::UnityEngine::Animations::AnimationPlayableGraphExtensions);
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimationPlayableGraphExtensions
class CORDL_TYPE AnimationPlayableGraphExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method InternalCreateAnimationOutput, addr 0x4856644, size 0x54, virtual false, abstract: false, final false
  static inline bool InternalCreateAnimationOutput(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ::ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16904 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPlayableGraphExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableGraphExtensions*, "UnityEngine.Animations", "AnimationPlayableGraphExtensions");
