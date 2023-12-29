#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentStartEndSongAudioEffect)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentStartEndSongAudioEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
// Type: ::EnvironmentStartEndSongAudioEffect
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 110, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(5087))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4051))
// CS Name: ::EnvironmentStartEndSongAudioEffect*
class CORDL_TYPE EnvironmentStartEndSongAudioEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playStartSongForNonZeroStartSongTime, offset 0x18, size 0x1
  __declspec(property(get = __get__playStartSongForNonZeroStartSongTime, put = __set__playStartSongForNonZeroStartSongTime)) bool _playStartSongForNonZeroStartSongTime;

  /// @brief Field _songFinishedAheadTime, offset 0x1c, size 0x4
  __declspec(property(get = __get__songFinishedAheadTime, put = __set__songFinishedAheadTime)) float_t _songFinishedAheadTime;

  /// @brief Field _songStartAudioClipVolume, offset 0x20, size 0x4
  __declspec(property(get = __get__songStartAudioClipVolume, put = __set__songStartAudioClipVolume)) float_t _songStartAudioClipVolume;

  /// @brief Field _songFinishedAudioClipVolume, offset 0x24, size 0x4
  __declspec(property(get = __get__songFinishedAudioClipVolume, put = __set__songFinishedAudioClipVolume)) float_t _songFinishedAudioClipVolume;

  /// @brief Field _songFailedAudioClipVolume, offset 0x28, size 0x4
  __declspec(property(get = __get__songFailedAudioClipVolume, put = __set__songFailedAudioClipVolume)) float_t _songFailedAudioClipVolume;

  /// @brief Field _songStartAudioClips, offset 0x30, size 0x8
  __declspec(property(get = __get__songStartAudioClips, put = __set__songStartAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _songStartAudioClips;

  /// @brief Field _songFinishedAudioClips, offset 0x38, size 0x8
  __declspec(property(get = __get__songFinishedAudioClips, put = __set__songFinishedAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _songFinishedAudioClips;

  /// @brief Field _songFailedAudioClips, offset 0x40, size 0x8
  __declspec(property(get = __get__songFailedAudioClips, put = __set__songFailedAudioClips))::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> _songFailedAudioClips;

  /// @brief Field _levelEndActions, offset 0x48, size 0x8
  __declspec(property(get = __get__levelEndActions, put = __set__levelEndActions))::GlobalNamespace::ILevelEndActions* _levelEndActions;

  /// @brief Field _audioTimeSource, offset 0x50, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _gamePause, offset 0x58, size 0x8
  __declspec(property(get = __get__gamePause, put = __set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _audioEffectsPlayer, offset 0x60, size 0x8
  __declspec(property(get = __get__audioEffectsPlayer, put = __set__audioEffectsPlayer))::GlobalNamespace::EnvironmentAudioEffectsPlayer* _audioEffectsPlayer;

  /// @brief Field _environmentContext, offset 0x68, size 0x4
  __declspec(property(get = __get__environmentContext, put = __set__environmentContext))::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _songFinishedPlayed, offset 0x6c, size 0x1
  __declspec(property(get = __get__songFinishedPlayed, put = __set__songFinishedPlayed)) bool _songFinishedPlayed;

  /// @brief Field _isWaitingToPlayStartAudio, offset 0x6d, size 0x1
  __declspec(property(get = __get__isWaitingToPlayStartAudio, put = __set__isWaitingToPlayStartAudio)) bool _isWaitingToPlayStartAudio;

  constexpr bool& __get__playStartSongForNonZeroStartSongTime();

  constexpr bool const& __get__playStartSongForNonZeroStartSongTime() const;

  constexpr void __set__playStartSongForNonZeroStartSongTime(bool value);

  constexpr float_t& __get__songFinishedAheadTime();

  constexpr float_t const& __get__songFinishedAheadTime() const;

  constexpr void __set__songFinishedAheadTime(float_t value);

  constexpr float_t& __get__songStartAudioClipVolume();

  constexpr float_t const& __get__songStartAudioClipVolume() const;

  constexpr void __set__songStartAudioClipVolume(float_t value);

  constexpr float_t& __get__songFinishedAudioClipVolume();

  constexpr float_t const& __get__songFinishedAudioClipVolume() const;

  constexpr void __set__songFinishedAudioClipVolume(float_t value);

  constexpr float_t& __get__songFailedAudioClipVolume();

  constexpr float_t const& __get__songFailedAudioClipVolume() const;

  constexpr void __set__songFailedAudioClipVolume(float_t value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__songStartAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__songStartAudioClips() const;

  constexpr void __set__songStartAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__songFinishedAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__songFinishedAudioClips() const;

  constexpr void __set__songFinishedAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*>& __get__songFailedAudioClips();

  constexpr ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> const& __get__songFailedAudioClips() const;

  constexpr void __set__songFailedAudioClips(::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> value);

  constexpr ::GlobalNamespace::ILevelEndActions*& __get__levelEndActions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __get__levelEndActions() const;

  constexpr void __set__levelEndActions(::GlobalNamespace::ILevelEndActions* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::IGamePause*& __get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __get__gamePause() const;

  constexpr void __set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr ::GlobalNamespace::EnvironmentAudioEffectsPlayer*& __get__audioEffectsPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentAudioEffectsPlayer*> const& __get__audioEffectsPlayer() const;

  constexpr void __set__audioEffectsPlayer(::GlobalNamespace::EnvironmentAudioEffectsPlayer* value);

  constexpr ::GlobalNamespace::EnvironmentContext& __get__environmentContext();

  constexpr ::GlobalNamespace::EnvironmentContext const& __get__environmentContext() const;

  constexpr void __set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr bool& __get__songFinishedPlayed();

  constexpr bool const& __get__songFinishedPlayed() const;

  constexpr void __set__songFinishedPlayed(bool value);

  constexpr bool& __get__isWaitingToPlayStartAudio();

  constexpr bool const& __get__isWaitingToPlayStartAudio() const;

  constexpr void __set__isWaitingToPlayStartAudio(bool value);

  /// @brief Method Start addr 0x20cd8d0 size 0x478 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20cdd48 size 0x254 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x20cdf9c size 0x2a8 virtual false final false
  inline void Update();

  /// @brief Method LevelWillFinishWithinAheadTime addr 0x20ce244 size 0x5c virtual false final false
  inline void LevelWillFinishWithinAheadTime();

  /// @brief Method HandleLevelFailed addr 0x20ce2a0 size 0x90 virtual false final false
  inline void HandleLevelFailed();

  /// @brief Method HandleGamePauseDidResume addr 0x20ce330 size 0x24 virtual false final false
  inline void HandleGamePauseDidResume();

  /// @brief Method HandleGamePauseDidPause addr 0x20ce354 size 0x24 virtual false final false
  inline void HandleGamePauseDidPause();

  static inline ::GlobalNamespace::EnvironmentStartEndSongAudioEffect* New_ctor();

  /// @brief Method .ctor addr 0x20ce378 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentStartEndSongAudioEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentStartEndSongAudioEffect(EnvironmentStartEndSongAudioEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentStartEndSongAudioEffect();

public:
  /// @brief Field _playStartSongForNonZeroStartSongTime, offset: 0x18, size: 0x1, def value: None
  bool ____playStartSongForNonZeroStartSongTime;

  /// @brief Field _songFinishedAheadTime, offset: 0x1c, size: 0x4, def value: None
  float_t ____songFinishedAheadTime;

  /// @brief Field _songStartAudioClipVolume, offset: 0x20, size: 0x4, def value: None
  float_t ____songStartAudioClipVolume;

  /// @brief Field _songFinishedAudioClipVolume, offset: 0x24, size: 0x4, def value: None
  float_t ____songFinishedAudioClipVolume;

  /// @brief Field _songFailedAudioClipVolume, offset: 0x28, size: 0x4, def value: None
  float_t ____songFailedAudioClipVolume;

  /// @brief Field _songStartAudioClips, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____songStartAudioClips;

  /// @brief Field _songFinishedAudioClips, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____songFinishedAudioClips;

  /// @brief Field _songFailedAudioClips, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AudioClip*, ::Array<::UnityEngine::AudioClip*>*> ____songFailedAudioClips;

  /// @brief Field _levelEndActions, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____levelEndActions;

  /// @brief Field _audioTimeSource, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _gamePause, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _audioEffectsPlayer, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentAudioEffectsPlayer* ____audioEffectsPlayer;

  /// @brief Field _environmentContext, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _songFinishedPlayed, offset: 0x6c, size: 0x1, def value: None
  bool ____songFinishedPlayed;

  /// @brief Field _isWaitingToPlayStartAudio, offset: 0x6d, size: 0x1, def value: None
  bool ____isWaitingToPlayStartAudio;

  /// @brief Field kSmallSongTime offset 0xffffffff size 0x4
  static constexpr float_t kSmallSongTime{ 0.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentStartEndSongAudioEffect, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____playStartSongForNonZeroStartSongTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedAheadTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songStartAudioClipVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedAudioClipVolume) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFailedAudioClipVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songStartAudioClips) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedAudioClips) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFailedAudioClips) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____levelEndActions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____audioTimeSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____gamePause) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____audioEffectsPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____environmentContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____songFinishedPlayed) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentStartEndSongAudioEffect, ____isWaitingToPlayStartAudio) == 0x6d, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentStartEndSongAudioEffect*, "", "EnvironmentStartEndSongAudioEffect");
