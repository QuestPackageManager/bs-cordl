#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ILayerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILayerable)
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
class ILayerable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ILayerable);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ILayerable
class CORDL_TYPE ILayerable {
public:
  // Declarations
  /// @brief Method CreateLayerMixer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  // Ctor Parameters [CppParam { name: "", ty: "ILayerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayerable(ILayerable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15861 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ILayerable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ILayerable*, "UnityEngine.Timeline", "ILayerable");
