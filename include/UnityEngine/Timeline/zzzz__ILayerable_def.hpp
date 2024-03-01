#pragma once
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
// Type: UnityEngine.Timeline::ILayerable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::ILayerable*
class CORDL_TYPE ILayerable {
public:
  // Declarations
  /// @brief Method CreateLayerMixer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  // Ctor Parameters [CppParam { name: "", ty: "ILayerable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILayerable(ILayerable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILayerable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayerable(ILayerable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ILayerable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ILayerable*, "UnityEngine.Timeline", "ILayerable");
