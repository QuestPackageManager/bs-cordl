#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Internal/zzzz__ISubAssetNotDuplicatable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AudioMixerGroup)
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Audio::AudioMixerGroup);
// Dependencies UnityEngine.Internal.ISubAssetNotDuplicatable, UnityEngine.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.AudioMixerGroup
class CORDL_TYPE AudioMixerGroup : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_audioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer> audioMixer;

  /// @brief Convert operator to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
  constexpr operator ::UnityEngine::Internal::ISubAssetNotDuplicatable*() noexcept;

  static inline ::UnityEngine::Audio::AudioMixerGroup* New_ctor();

  /// @brief Method .ctor, addr 0x485e038, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioMixer, addr 0x485e090, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Audio::AudioMixer> get_audioMixer();

  /// @brief Convert to "::UnityEngine::Internal::ISubAssetNotDuplicatable"
  constexpr ::UnityEngine::Internal::ISubAssetNotDuplicatable* i___UnityEngine__Internal__ISubAssetNotDuplicatable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioMixerGroup(AudioMixerGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioMixerGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioMixerGroup(AudioMixerGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Audio
NEED_NO_BOX(::UnityEngine::Audio::AudioMixerGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerGroup*, "UnityEngine.Audio", "AudioMixerGroup");
