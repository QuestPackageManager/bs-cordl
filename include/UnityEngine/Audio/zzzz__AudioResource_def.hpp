#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioResource)
// Forward declare root types
namespace UnityEngine::Audio {
class AudioResource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::AudioResource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioResource*, "UnityEngine.Audio", "AudioResource");
// Dependencies UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioResource
class CORDL_TYPE AudioResource : public ::UnityEngine::Object {
public:
  // Declarations
  static inline ::UnityEngine::Audio::AudioResource* New_ctor();

  /// @brief Method .ctor, addr 0x6a47528, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioResource(AudioResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioResource(AudioResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21029 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::AudioResource) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
