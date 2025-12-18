#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3DAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
CORDL_MODULE_EXPORT(TextureProcessor3DAsset)
namespace GlobalNamespace {
class TextureProcessor3DBehaviour;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureProcessor3DAsset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextureProcessor3DAsset);
// Dependencies UnityEngine.Playables.PlayableAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureProcessor3DAsset
class CORDL_TYPE TextureProcessor3DAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  /// @brief Field _template, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__template, put = __cordl_internal_set__template)) ::GlobalNamespace::TextureProcessor3DBehaviour* _template;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CreatePlayable, addr 0x5774a90, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject);

  static inline ::GlobalNamespace::TextureProcessor3DAsset* New_ctor();

  constexpr ::GlobalNamespace::TextureProcessor3DBehaviour* const& __cordl_internal_get__template() const;

  constexpr ::GlobalNamespace::TextureProcessor3DBehaviour*& __cordl_internal_get__template();

  constexpr void __cordl_internal_set__template(::GlobalNamespace::TextureProcessor3DBehaviour* value);

  /// @brief Method .ctor, addr 0x5774b44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clipCaps, addr 0x5774a88, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3DAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureProcessor3DAsset(TextureProcessor3DAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureProcessor3DAsset(TextureProcessor3DAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6778 };

  /// @brief Field _template, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::TextureProcessor3DBehaviour* ____template;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextureProcessor3DAsset, ____template) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextureProcessor3DAsset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextureProcessor3DAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureProcessor3DAsset*, "", "TextureProcessor3DAsset");
