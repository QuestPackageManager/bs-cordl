#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioPlayableGraphExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AudioPlayableGraphExtensions)
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioPlayableGraphExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioPlayableGraphExtensions);
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioPlayableGraphExtensions
class CORDL_TYPE AudioPlayableGraphExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method InternalCreateAudioOutput, addr 0x485e3f8, size 0x54, virtual false, abstract: false, final false
  static inline bool InternalCreateAudioOutput(::ByRef<::UnityEngine::Playables::PlayableGraph> graph, ::StringW name, ::ByRef<::UnityEngine::Playables::PlayableOutputHandle> handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayableGraphExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayableGraphExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPlayableGraphExtensions(AudioPlayableGraphExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayableGraphExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPlayableGraphExtensions(AudioPlayableGraphExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableGraphExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioPlayableGraphExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableGraphExtensions*, "UnityEngine.Audio", "AudioPlayableGraphExtensions");
