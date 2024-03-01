#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameSongController)
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace UnityEngine {
class WaitUntil;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSongController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameSongController);
// Type: ::GameSongController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameSongController*
class CORDL_TYPE GameSongController : public ::GlobalNamespace::SongController {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController,
                      put = __cordl_internal_set__audioTimeSyncController))::UnityW<::GlobalNamespace::AudioTimeSyncController> _audioTimeSyncController;

  /// @brief Field _beatmapCallbacksController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapCallbacksUpdater, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksUpdater,
                      put = __cordl_internal_set__beatmapCallbacksUpdater))::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> _beatmapCallbacksUpdater;

  /// @brief Field _failAudioPitchGainEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__failAudioPitchGainEffect,
                      put = __cordl_internal_set__failAudioPitchGainEffect))::UnityW<::GlobalNamespace::AudioPitchGainEffect> _failAudioPitchGainEffect;

  /// @brief Field _songDidFinish, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__songDidFinish, put = __cordl_internal_set__songDidFinish)) bool _songDidFinish;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_waitUntilIsReadyToStartTheSong))::UnityEngine::WaitUntil* waitUntilIsReadyToStartTheSong;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
  constexpr operator ::GlobalNamespace::IStartSeekSongController*() noexcept;

  /// @brief Method FailStopSong, addr 0x24964e8, size 0x12c, virtual false, abstract: false, final false
  inline void FailStopSong();

  /// @brief Method LateUpdate, addr 0x249637c, size 0x74, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::GameSongController* New_ctor();

  /// @brief Method PauseSong, addr 0x2496488, size 0x30, virtual true, abstract: false, final false
  inline void PauseSong();

  /// @brief Method ResumeSong, addr 0x24964b8, size 0x30, virtual true, abstract: false, final false
  inline void ResumeSong();

  /// @brief Method SeekTo, addr 0x2496614, size 0x1c, virtual true, abstract: false, final true
  inline void SeekTo(float_t songTime);

  /// @brief Method StartSong, addr 0x249640c, size 0x44, virtual true, abstract: false, final true
  inline void StartSong(float_t songTimeOffset);

  /// @brief Method StopSong, addr 0x249646c, size 0x1c, virtual true, abstract: false, final false
  inline void StopSong();

  /// @brief Method <FailStopSong>b__14_0, addr 0x2496640, size 0x1c, virtual false, abstract: false, final false
  inline void _FailStopSong_b__14_0();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> const& __cordl_internal_get__beatmapCallbacksUpdater() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater>& __cordl_internal_get__beatmapCallbacksUpdater();

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect> const& __cordl_internal_get__failAudioPitchGainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::AudioPitchGainEffect>& __cordl_internal_get__failAudioPitchGainEffect();

  constexpr bool const& __cordl_internal_get__songDidFinish() const;

  constexpr bool& __cordl_internal_get__songDidFinish();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapCallbacksUpdater(::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> value);

  constexpr void __cordl_internal_set__failAudioPitchGainEffect(::UnityW<::GlobalNamespace::AudioPitchGainEffect> value);

  constexpr void __cordl_internal_set__songDidFinish(bool value);

  /// @brief Method .ctor, addr 0x2496630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_songLength, addr 0x2496344, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_songLength();

  /// @brief Method get_waitUntilIsReadyToStartTheSong, addr 0x2496360, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();

  /// @brief Convert to "::GlobalNamespace::IStartSeekSongController"
  constexpr ::GlobalNamespace::IStartSeekSongController* i___GlobalNamespace__IStartSeekSongController() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSongController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameSongController(GameSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameSongController(GameSongController const&) = delete;

  /// @brief Field _audioTimeSyncController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _failAudioPitchGainEffect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioPitchGainEffect> ____failAudioPitchGainEffect;

  /// @brief Field _beatmapCallbacksController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapCallbacksUpdater, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> ____beatmapCallbacksUpdater;

  /// @brief Field _songDidFinish, offset: 0x48, size: 0x1, def value: None
  bool ____songDidFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameSongController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSongController, ____audioTimeSyncController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSongController, ____failAudioPitchGainEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSongController, ____beatmapCallbacksController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSongController, ____beatmapCallbacksUpdater) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSongController, ____songDidFinish) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameSongController*, "", "GameSongController");
