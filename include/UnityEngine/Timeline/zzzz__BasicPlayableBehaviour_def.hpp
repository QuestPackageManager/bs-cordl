#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/BasicPlayableBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicPlayableBehaviour)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace UnityEngine::Playables {
class IPlayableBehaviour;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class BasicPlayableBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::BasicPlayableBehaviour);
// Type: UnityEngine.Timeline::BasicPlayableBehaviour
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::BasicPlayableBehaviour*
class CORDL_TYPE BasicPlayableBehaviour : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableAsset"
  constexpr operator ::UnityEngine::Playables::IPlayableAsset*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableBehaviour"
  constexpr operator ::UnityEngine::Playables::IPlayableBehaviour*() noexcept;

  /// @brief Method CreatePlayable, addr 0x47b07e0, size 0xa4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);

  static inline ::UnityEngine::Timeline::BasicPlayableBehaviour* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x47b07d4, size 0x4, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x47b07d0, size 0x4, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnGraphStart, addr 0x47b07c0, size 0x4, virtual true, abstract: false, final false
  inline void OnGraphStart(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnGraphStop, addr 0x47b07c4, size 0x4, virtual true, abstract: false, final false
  inline void OnGraphStop(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableCreate, addr 0x47b07c8, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayableCreate(::UnityEngine::Playables::Playable playable);

  /// @brief Method OnPlayableDestroy, addr 0x47b07cc, size 0x4, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method PrepareFrame, addr 0x47b07d8, size 0x4, virtual true, abstract: false, final false
  inline void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method ProcessFrame, addr 0x47b07dc, size 0x4, virtual true, abstract: false, final false
  inline void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData);

  /// @brief Method .ctor, addr 0x47b0884, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_duration, addr 0x47b0710, size 0x58, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_outputs, addr 0x47b0768, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableAsset"
  constexpr ::UnityEngine::Playables::IPlayableAsset* i___UnityEngine__Playables__IPlayableAsset() noexcept;

  /// @brief Convert to "::UnityEngine::Playables::IPlayableBehaviour"
  constexpr ::UnityEngine::Playables::IPlayableBehaviour* i___UnityEngine__Playables__IPlayableBehaviour() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicPlayableBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicPlayableBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicPlayableBehaviour(BasicPlayableBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicPlayableBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicPlayableBehaviour(BasicPlayableBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::BasicPlayableBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::BasicPlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::BasicPlayableBehaviour*, "UnityEngine.Timeline", "BasicPlayableBehaviour");
