#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerSnapshot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Internal/zzzz__ISubAssetNotDuplicatable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixerSnapshot)
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixerSnapshot);
// Dependencies UnityEngine.Internal.ISubAssetNotDuplicatable, UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioMixerSnapshot
class CORDL_TYPE AudioMixerSnapshot : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer> audioMixer;

  /// @brief Convert operator to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
  constexpr operator ::UnityEngine::Internal::ISubAssetNotDuplicatable*() noexcept;

  static inline ::UnityEngine::Audio::AudioMixerSnapshot* New_ctor();

  /// @brief Method TransitionTo, addr 0x48629b4, size 0x5c, virtual false, abstract: false, final false
  inline void TransitionTo(float_t timeToReach);

  /// @brief Method .ctor, addr 0x486295c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioMixer, addr 0x4862288, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixer> get_audioMixer();

  /// @brief Convert to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
  constexpr ::UnityEngine::Internal::ISubAssetNotDuplicatable* i___UnityEngine__Internal__ISubAssetNotDuplicatable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerSnapshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixerSnapshot(AudioMixerSnapshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerSnapshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixerSnapshot(AudioMixerSnapshot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerSnapshot, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixerSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerSnapshot*, "UnityEngine.Audio", "AudioMixerSnapshot");
