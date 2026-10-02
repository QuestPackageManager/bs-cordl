#pragma once
// IWYU pragma private; include "UnityEngine/AudioExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioExtensions)
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine {
class AudioExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioExtensions*, "UnityEngine", "AudioExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioExtensions
class CORDL_TYPE AudioExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method ChannelCount, addr 0x6e9ae38, size 0x68, virtual false, abstract: false, final false
  static inline int32_t ChannelCount(::UnityEngine::AudioSpeakerMode speakerMode);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioExtensions(AudioExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioExtensions(AudioExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine
