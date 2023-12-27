#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(AvatarColorAsset)
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarColorAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarColorAsset);
// Type: ::AvatarColorAsset
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6003))
// CS Name: ::AvatarColorAsset*
class CORDL_TYPE AvatarColorAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field _template, offset 0x18, size 0x8
  __declspec(property(get = __get__template, put = __set__template))::GlobalNamespace::AvatarColorBehaviour* _template;

  __declspec(property(get = get_clipCaps))::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  constexpr ::GlobalNamespace::AvatarColorBehaviour*& __get__template();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarColorBehaviour*> const& __get__template() const;

  constexpr void __set__template(::GlobalNamespace::AvatarColorBehaviour* value);

  /// @brief Method get_clipCaps addr 0x2315198 size 0x8 virtual true final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method CreatePlayable addr 0x23151a0 size 0xa8 virtual true final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  static inline ::GlobalNamespace::AvatarColorAsset* New_ctor();

  /// @brief Method .ctor addr 0x2315248 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarColorAsset(AvatarColorAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarColorAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarColorAsset(AvatarColorAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarColorAsset();

public:
  /// @brief Field _template, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::AvatarColorBehaviour* ____template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarColorAsset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarColorAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorAsset*, "", "AvatarColorAsset");
