#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(TubeLightIntensityAsset)
namespace GlobalNamespace {
class TubeLightIntensityBehaviour;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightIntensityAsset);
// Type: ::TubeLightIntensityAsset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6023))
// CS Name: ::TubeLightIntensityAsset*
class CORDL_TYPE TubeLightIntensityAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field _template, offset 0x18, size 0x8
  __declspec(property(get = __get__template, put = __set__template))::GlobalNamespace::TubeLightIntensityBehaviour* _template;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  constexpr ::GlobalNamespace::TubeLightIntensityBehaviour*& __get__template();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeLightIntensityBehaviour*> const& __get__template() const;

  constexpr void __set__template(::GlobalNamespace::TubeLightIntensityBehaviour* value);

  /// @brief Method get_clipCaps, addr 0x231829c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method CreatePlayable, addr 0x23182a4, size 0xa8, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::TubeLightIntensityAsset* New_ctor();

  /// @brief Method .ctor, addr 0x231834c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TubeLightIntensityAsset(TubeLightIntensityAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TubeLightIntensityAsset(TubeLightIntensityAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TubeLightIntensityAsset();

public:
  /// @brief Field _template, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TubeLightIntensityBehaviour* ____template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightIntensityAsset, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TubeLightIntensityAsset, ____template) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightIntensityAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightIntensityAsset*, "", "TubeLightIntensityAsset");
