#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentStartEndSongAudioEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentStartEndSongAudioEffect)
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentStartEndSongAudioEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
// Dependencies EnvironmentContext, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentStartEndSongAudioEffect
class CORDL_TYPE EnvironmentStartEndSongAudioEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioEffectsPlayer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__audioEffectsPlayer, put = __cordl_internal_set__audioEffectsPlayer)) ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> _audioEffectsPlayer;

  /// @brief Field _audioTimeSource, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _environmentContext, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentContext, put = __cordl_internal_set__environmentContext)) ::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _gamePause, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _isWaitingToPlayStartAudio, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get__isWaitingToPlayStartAudio, put = __cordl_internal_set__isWaitingToPlayStartAudio)) bool _isWaitingToPlayStartAudio;

  /// @brief Field _levelEndActions, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__levelEndActions, put = __cordl_internal_set__levelEndActions)) ::GlobalNamespace::ILevelEndActions* _levelEndActions;

  /// @brief Field _playStartSongForNonZeroStartSongTime, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__playStartSongForNonZeroStartSongTime, put = __cordl_internal_set__playStartSongForNonZeroStartSongTime)) bool _playStartSongForNonZeroStartSongTime;

  /// @brief Field _songFailedAudioClipVolume, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__songFailedAudioClipVolume, put = __cordl_internal_set__songFailedAudioClipVolume)) float_t _songFailedAudioClipVolume;

  /// @brief Field _songFailedAudioClips, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songFailedAudioClips,
                      put = __cordl_internal_set__songFailedAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _songFailedAudioClips;

  /// @brief Field _songFinishedAheadTime, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__songFinishedAheadTime, put = __cordl_internal_set__songFinishedAheadTime)) float_t _songFinishedAheadTime;

  /// @brief Field _songFinishedAudioClipVolume, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__songFinishedAudioClipVolume, put = __cordl_internal_set__songFinishedAudioClipVolume)) float_t _songFinishedAudioClipVolume;

  /// @brief Field _songFinishedAudioClips, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__songFinishedAudioClips,
                      put = __cordl_internal_set__songFinishedAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _songFinishedAudioClips;

  /// @brief Field _songFinishedPlayed, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__songFinishedPlayed, put = __cordl_internal_set__songFinishedPlayed)) bool _songFinishedPlayed;

  /// @brief Field _songStartAudioClipVolume, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__songStartAudioClipVolume, put = __cordl_internal_set__songStartAudioClipVolume)) float_t _songStartAudioClipVolume;

  /// @brief Field _songStartAudioClips, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songStartAudioClips,
                      put = __cordl_internal_set__songStartAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>
      _songStartAudioClips;

  /// @brief Method HandleGamePauseDidPause, addr 0x3ad19f4, size 0x24, virtual false, abstract: false, final false
  inline void HandleGamePauseDidPause();

  /// @brief Method HandleGamePauseDidResume, addr 0x3ad19d0, size 0x24, virtual false, abstract: false, final false
  inline void HandleGamePauseDidResume();

  /// @brief Method HandleLevelFailed, addr 0x3ad1940, size 0x90, virtual false, abstract: false, final false
  inline void HandleLevelFailed();

  /// @brief Method LevelWillFinishWithinAheadTime, addr 0x3ad18e4, size 0x5c, virtual false, abstract: false, final false
  inline void LevelWillFinishWithinAheadTime();

  static inline ::GlobalNamespace::EnvironmentStartEndSongAudioEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad13e8, size 0x254, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ad0f70, size 0x478, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3ad163c, size 0x2a8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> const& __cordl_internal_get__audioEffectsPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer>& __cordl_internal_get__audioEffectsPlayer();

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::EnvironmentContext const& __cordl_internal_get__environmentContext() const;

  constexpr ::GlobalNamespace::EnvironmentContext& __cordl_internal_get__environmentContext();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr bool const& __cordl_internal_get__isWaitingToPlayStartAudio() const;

  constexpr bool& __cordl_internal_get__isWaitingToPlayStartAudio();

  constexpr ::GlobalNamespace::ILevelEndActions* const& __cordl_internal_get__levelEndActions() const;

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__levelEndActions();

  constexpr bool const& __cordl_internal_get__playStartSongForNonZeroStartSongTime() const;

  constexpr bool& __cordl_internal_get__playStartSongForNonZeroStartSongTime();

  constexpr float_t const& __cordl_internal_get__songFailedAudioClipVolume() const;

  constexpr float_t& __cordl_internal_get__songFailedAudioClipVolume();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__songFailedAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__songFailedAudioClips();

  constexpr float_t const& __cordl_internal_get__songFinishedAheadTime() const;

  constexpr float_t& __cordl_internal_get__songFinishedAheadTime();

  constexpr float_t const& __cordl_internal_get__songFinishedAudioClipVolume() const;

  constexpr float_t& __cordl_internal_get__songFinishedAudioClipVolume();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__songFinishedAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__songFinishedAudioClips();

  constexpr bool const& __cordl_internal_get__songFinishedPlayed() const;

  constexpr bool& __cordl_internal_get__songFinishedPlayed();

  constexpr float_t const& __cordl_internal_get__songStartAudioClipVolume() const;

  constexpr float_t& __cordl_internal_get__songStartAudioClipVolume();

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> const& __cordl_internal_get__songStartAudioClips() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*>& __cordl_internal_get__songStartAudioClips();

  constexpr void __cordl_internal_set__audioEffectsPlayer(::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> value);

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__isWaitingToPlayStartAudio(bool value);

  constexpr void __cordl_internal_set__levelEndActions(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__playStartSongForNonZeroStartSongTime(bool value);

  constexpr void __cordl_internal_set__songFailedAudioClipVolume(float_t value);

  constexpr void __cordl_internal_set__songFailedAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__songFinishedAheadTime(float_t value);

  constexpr void __cordl_internal_set__songFinishedAudioClipVolume(float_t value);

  constexpr void __cordl_internal_set__songFinishedAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  constexpr void __cordl_internal_set__songFinishedPlayed(bool value);

  constexpr void __cordl_internal_set__songStartAudioClipVolume(float_t value);

  constexpr void __cordl_internal_set__songStartAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> value);

  /// @brief Method .ctor, addr 0x3ad1a18, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentStartEndSongAudioEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4009 };

  /// @brief Field kSmallSongTime offset 0xffffffff size 0x4
  static constexpr float_t kSmallSongTime{ static_cast<float_t>(0.5f) };

  /// @brief Field _playStartSongForNonZeroStartSongTime, offset: 0x20, size: 0x1, def value: None
  bool ____playStartSongForNonZeroStartSongTime;

  /// @brief Field _songFinishedAheadTime, offset: 0x24, size: 0x4, def value: None
  float_t ____songFinishedAheadTime;

  /// @brief Field _songStartAudioClipVolume, offset: 0x28, size: 0x4, def value: None
  float_t ____songStartAudioClipVolume;

  /// @brief Field _songFinishedAudioClipVolume, offset: 0x2c, size: 0x4, def value: None
  float_t ____songFinishedAudioClipVolume;

  /// @brief Field _songFailedAudioClipVolume, offset: 0x30, size: 0x4, def value: None
  float_t ____songFailedAudioClipVolume;

  /// @brief Field _songStartAudioClips, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____songStartAudioClips;

  /// @brief Field _songFinishedAudioClips, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____songFinishedAudioClips;

  /// @brief Field _songFailedAudioClips, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::AudioClip>, ::Array<::UnityW<::UnityEngine::AudioClip>>*> ____songFailedAudioClips;

  /// @brief Field _levelEndActions, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____levelEndActions;

  /// @brief Field _audioTimeSource, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _gamePause, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _audioEffectsPlayer, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentAudioEffectsPlayer> ____audioEffectsPlayer;

  /// @brief Field _environmentContext, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _songFinishedPlayed, offset: 0x74, size: 0x1, def value: None
  bool ____songFinishedPlayed;

  /// @brief Field _isWaitingToPlayStartAudio, offset: 0x75, size: 0x1, def value: None
  bool ____isWaitingToPlayStartAudio;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____playStartSongForNonZeroStartSongTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedAheadTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songStartAudioClipVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedAudioClipVolume) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFailedAudioClipVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songStartAudioClips) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedAudioClips) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFailedAudioClips) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____levelEndActions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____audioTimeSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____gamePause) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____audioEffectsPlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____environmentContext) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedPlayed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____isWaitingToPlayStartAudio) == 0x75, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentStartEndSongAudioEffect, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentStartEndSongAudioEffect*, "", "EnvironmentStartEndSongAudioEffect");
