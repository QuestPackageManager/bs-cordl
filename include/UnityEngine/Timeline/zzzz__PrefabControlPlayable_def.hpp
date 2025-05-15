#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/PrefabControlPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PrefabControlPlayable)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
template <typename T> struct ScriptPlayable_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class PrefabControlPlayable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::PrefabControlPlayable);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.PrefabControlPlayable
class CORDL_TYPE PrefabControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
public:
  // Declarations
  /// @brief Field m_Instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Instance, put = __cordl_internal_set_m_Instance)) ::UnityW<::UnityEngine::GameObject> m_Instance;

  __declspec(property(get = get_prefabInstance)) ::UnityW<::UnityEngine::GameObject> prefabInstance;

  /// @brief Method Create, addr 0x4828fbc, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::PrefabControlPlayable*>
  Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* prefabGameObject, ::UnityEngine::Transform* parentTransform);

  /// @brief Method Initialize, addr 0x48290fc, size 0x284, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> Initialize(::UnityEngine::GameObject* prefabGameObject, ::UnityEngine::Transform* parentTransform);

  static inline ::UnityEngine::Timeline::PrefabControlPlayable* New_ctor();

  /// @brief Method OnBehaviourPause, addr 0x4829850, size 0xa8, virtual true, abstract: false, final false
  inline void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnBehaviourPlay, addr 0x48297c8, size 0x88, virtual true, abstract: false, final false
  inline void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);

  /// @brief Method OnPlayableDestroy, addr 0x48296f8, size 0xd0, virtual true, abstract: false, final false
  inline void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);

  /// @brief Method SetHideFlagsRecursive, addr 0x4829388, size 0x370, virtual false, abstract: false, final false
  static inline void SetHideFlagsRecursive(::UnityEngine::GameObject* gameObject);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_Instance() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_Instance();

  constexpr void __cordl_internal_set_m_Instance(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x48298f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_prefabInstance, addr 0x4829380, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_prefabInstance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefabControlPlayable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrefabControlPlayable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrefabControlPlayable(PrefabControlPlayable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrefabControlPlayable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrefabControlPlayable(PrefabControlPlayable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15875 };

  /// @brief Field m_Instance, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_Instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::PrefabControlPlayable, ___m_Instance) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::PrefabControlPlayable, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::PrefabControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::PrefabControlPlayable*, "UnityEngine.Timeline", "PrefabControlPlayable");
