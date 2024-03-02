#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IPlayableAsset)
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
class IPlayableAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Playables::IPlayableAsset);
// Type: UnityEngine.Playables::IPlayableAsset
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: ::UnityEngine.Playables::IPlayableAsset*
class CORDL_TYPE IPlayableAsset {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  /// @brief Method CreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner);

  /// @brief Method get_duration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_duration();

  // Ctor Parameters [CppParam { name: "", ty: "IPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlayableAsset(IPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlayableAsset(IPlayableAsset const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Playables
NEED_NO_BOX(::UnityEngine::Playables::IPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::IPlayableAsset*, "UnityEngine.Playables", "IPlayableAsset");
