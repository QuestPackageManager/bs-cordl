#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableBinding)
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableBinding;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimationPlayableBinding*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationPlayableBinding*, "UnityEngine.Animations", "AnimationPlayableBinding");
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimationPlayableBinding
class CORDL_TYPE AnimationPlayableBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x6a419c4, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW name, ::UnityEngine::Object* key);

  /// @brief Method CreateAnimationOutput, addr 0x6a41ac0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput CreateAnimationOutput(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationPlayableBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnimationPlayableBinding(AnimationPlayableBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnimationPlayableBinding(AnimationPlayableBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimationPlayableBinding) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Animations
