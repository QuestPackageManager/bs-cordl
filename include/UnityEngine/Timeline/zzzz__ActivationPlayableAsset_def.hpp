#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(ActivationPlayableAsset)
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ActivationPlayableAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ActivationPlayableAsset);
// Type: UnityEngine.Timeline::ActivationPlayableAsset
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13826))
// CS Name: ::UnityEngine.Timeline::ActivationPlayableAsset*
class CORDL_TYPE ActivationPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method get_clipCaps addr 0x2c4ec98 size 0x8 virtual true final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method CreatePlayable addr 0x2c4eca0 size 0x6c virtual true final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::UnityEngine::Timeline::ActivationPlayableAsset* New_ctor();

  /// @brief Method .ctor addr 0x2c4ed0c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ActivationPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivationPlayableAsset(ActivationPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivationPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivationPlayableAsset(ActivationPlayableAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivationPlayableAsset();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ActivationPlayableAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ActivationPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationPlayableAsset*, "UnityEngine.Timeline", "ActivationPlayableAsset");
