#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentAudioEffectsPlayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentAudioEffectsPlayer)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentAudioEffectsPlayer
class CORDL_TYPE EnvironmentAudioEffectsPlayer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  __declspec(property(get = get_audioSource)) ::UnityW<::UnityEngine::AudioSource> audioSource;

  static inline ::GlobalNamespace::EnvironmentAudioEffectsPlayer* New_ctor();

  /// @brief Method PlayEffect, addr 0x3ad0f04, size 0x64, virtual false, abstract: false, final false
  inline void PlayEffect(::UnityEngine::AudioClip* clip, float_t volume);

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  /// @brief Method .ctor, addr 0x3ad0f68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_audioSource, addr 0x3ad0efc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AudioSource> get_audioSource();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentAudioEffectsPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentAudioEffectsPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentAudioEffectsPlayer(EnvironmentAudioEffectsPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4008 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentAudioEffectsPlayer, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentAudioEffectsPlayer, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentAudioEffectsPlayer*, "", "EnvironmentAudioEffectsPlayer");
