#pragma once
// IWYU pragma private; include "GlobalNamespace\TextureProcessor3DTrack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureProcessor3DTrack)
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
namespace GlobalNamespace {
class TextureProcessor3DTrack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextureProcessor3DTrack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextureProcessor3DTrack*, "", "TextureProcessor3DTrack");
// Dependencies UnityEngine.Timeline.TrackAsset
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextureProcessor3DTrack
class CORDL_TYPE TextureProcessor3DTrack : public ::UnityEngine::Timeline::TrackAsset {
public:
  // Declarations
  /// @brief Method CreateTrackMixer, addr 0x590a4d0, size 0xac, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount);

  static inline ::GlobalNamespace::TextureProcessor3DTrack* New_ctor();

  /// @brief Method .ctor, addr 0x590a57c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureProcessor3DTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureProcessor3DTrack(TextureProcessor3DTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureProcessor3DTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureProcessor3DTrack(TextureProcessor3DTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TextureProcessor3DTrack) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
