#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioPlayableBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AudioPlayableBinding)
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioPlayableBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioPlayableBinding);
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioPlayableBinding
class CORDL_TYPE AudioPlayableBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Method Create, addr 0x485e1b4, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableBinding Create(::StringW name, ::UnityEngine::Object* key);

  /// @brief Method CreateAudioOutput, addr 0x485e2e0, size 0x40, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableOutput CreateAudioOutput(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioPlayableBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayableBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioPlayableBinding(AudioPlayableBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioPlayableBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioPlayableBinding(AudioPlayableBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioPlayableBinding, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioPlayableBinding*, "UnityEngine.Audio", "AudioPlayableBinding");
