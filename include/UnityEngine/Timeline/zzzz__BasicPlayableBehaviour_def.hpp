#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicPlayableBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class BasicPlayableBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::BasicPlayableBehaviour);
// Type: UnityEngine.Timeline::BasicPlayableBehaviour
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14174))
// CS Name: ::UnityEngine.Timeline::BasicPlayableBehaviour*
class CORDL_TYPE BasicPlayableBehaviour : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_outputs))::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableAsset"
  constexpr operator ::UnityEngine::Playables::IPlayableAsset*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableBehaviour"
  constexpr operator ::UnityEngine::Playables::IPlayableBehaviour*() noexcept;

  /// @brief Method get_duration addr 0x2ae68f0 size 0x58 virtual true final false
  inline double_t get_duration();

  /// @brief Method get_outputs addr 0x2ae6948 size 0x58 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Method OnGraphStart addr 0x2ae69a0 size 0x4 virtual true final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnGraphStop addr 0x2ae69a4 size 0x4 virtual true final false
  inline void OnGraphStop(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableCreate addr 0x2ae69a8 size 0x4 virtual true final false
  inline void OnPlayableCreate(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy addr 0x2ae69ac size 0x4 virtual true final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnBehaviourPlay addr 0x2ae69b0 size 0x4 virtual true final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPause addr 0x2ae69b4 size 0x4 virtual true final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method PrepareFrame addr 0x2ae69b8 size 0x4 virtual true final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame addr 0x2ae69bc size 0x4 virtual true final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method CreatePlayable addr 0x2ae69c0 size 0xa4 virtual true final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);

  static inline ::UnityEngine::Timeline::BasicPlayableBehaviour* New_ctor();

  /// @brief Method .ctor addr 0x2ae6a64 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BasicPlayableBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicPlayableBehaviour(BasicPlayableBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicPlayableBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicPlayableBehaviour(BasicPlayableBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicPlayableBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::BasicPlayableBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::BasicPlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::BasicPlayableBehaviour*, "UnityEngine.Timeline", "BasicPlayableBehaviour");
