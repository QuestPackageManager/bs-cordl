#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableAsset)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
struct IntPtr;
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
namespace UnityEngine::Playables {
class PlayableAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::PlayableAsset);
// Dependencies UnityEngine.Playables.IPlayableAsset, UnityEngine.ScriptableObject
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableAsset
class CORDL_TYPE PlayableAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* outputs;

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayableAsset"
  constexpr operator ::UnityEngine::Playables::IPlayableAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);

  /// @brief Method Internal_CreatePlayable, addr 0x48cbfbc, size 0xd8, virtual false, abstract: false, final false
  static inline void Internal_CreatePlayable(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::IntPtr ptr);

  /// @brief Method Internal_GetPlayableAssetDuration, addr 0x48cc094, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_GetPlayableAssetDuration(::UnityEngine::Playables::PlayableAsset* asset, ::System::IntPtr ptrToDouble);

  static inline ::UnityEngine::Playables::PlayableAsset* New_ctor();

  /// @brief Method .ctor, addr 0x48cc0bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_duration, addr 0x48cbf0c, size 0x58, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_outputs, addr 0x48cbf64, size 0x58, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs();

  /// @brief Convert to "::UnityEngine::Playables::IPlayableAsset"
  constexpr ::UnityEngine::Playables::IPlayableAsset* i___UnityEngine__Playables__IPlayableAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayableAsset(PlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayableAsset(PlayableAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::PlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableAsset*, "UnityEngine.Playables", "PlayableAsset");
