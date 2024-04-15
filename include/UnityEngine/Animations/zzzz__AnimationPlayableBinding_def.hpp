#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Animations::AnimationPlayableBinding);
// Type: UnityEngine.Animations::AnimationPlayableBinding
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: ::UnityEngine.Animations::AnimationPlayableBinding*
class CORDL_TYPE AnimationPlayableBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x31c7038, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW name, ::UnityEngine::Object* key);

  /// @brief Method CreateAnimationOutput, addr 0x31c7174, size 0x40, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Animations::AnimationPlayableBinding, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Animations
NEED_NO_BOX(::UnityEngine::Animations::AnimationPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationPlayableBinding*, "UnityEngine.Animations", "AnimationPlayableBinding");
