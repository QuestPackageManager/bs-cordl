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
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSongController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameSongController);
// Type: ::GameSongController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5334))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5332))
// CS Name: ::GameSongController*
class CORDL_TYPE GameSongController : public ::GlobalNamespace::SongController {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x20, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _failAudioPitchGainEffect, offset 0x28, size 0x8
  __declspec(property(get = __get__failAudioPitchGainEffect, put = __set__failAudioPitchGainEffect))::GlobalNamespace::AudioPitchGainEffect* _failAudioPitchGainEffect;

  /// @brief Field _beatmapCallbacksController, offset 0x30, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapCallbacksUpdater, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapCallbacksUpdater, put = __set__beatmapCallbacksUpdater))::GlobalNamespace::BeatmapCallbacksUpdater* _beatmapCallbacksUpdater;

  /// @brief Field _songDidFinish, offset 0x40, size 0x1
  __declspec(property(get = __get__songDidFinish, put = __set__songDidFinish)) bool _songDidFinish;

  __declspec(property(get = get_songLength)) float_t songLength;

  __declspec(property(get = get_waitUntilIsReadyToStartTheSong))::UnityEngine::WaitUntil* waitUntilIsReadyToStartTheSong;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongController"
  constexpr operator ::GlobalNamespace::IStartSeekSongController*() noexcept;

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::AudioPitchGainEffect*& __get__failAudioPitchGainEffect();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPitchGainEffect*> const& __get__failAudioPitchGainEffect() const;

  constexpr void __set__failAudioPitchGainEffect(::GlobalNamespace::AudioPitchGainEffect* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksUpdater*& __get__beatmapCallbacksUpdater();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksUpdater*> const& __get__beatmapCallbacksUpdater() const;

  constexpr void __set__beatmapCallbacksUpdater(::GlobalNamespace::BeatmapCallbacksUpdater* value);

  constexpr bool& __get__songDidFinish();

  constexpr bool const& __get__songDidFinish() const;

  constexpr void __set__songDidFinish(bool value);

  /// @brief Method get_songLength addr 0x22686d4 size 0x1c virtual false final false
  inline float_t get_songLength();

  /// @brief Method get_waitUntilIsReadyToStartTheSong addr 0x22686f0 size 0x1c virtual true final true
  inline ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();

  /// @brief Method LateUpdate addr 0x226870c size 0x74 virtual false final false
  inline void LateUpdate();

  /// @brief Method StartSong addr 0x226879c size 0x24 virtual true final true
  inline void StartSong(float_t songTimeOffset);

  /// @brief Method StopSong addr 0x22687c0 size 0x1c virtual true final false
  inline void StopSong();

  /// @brief Method PauseSong addr 0x22687dc size 0x30 virtual true final false
  inline void PauseSong();

  /// @brief Method ResumeSong addr 0x226880c size 0x30 virtual true final false
  inline void ResumeSong();

  /// @brief Method FailStopSong addr 0x226883c size 0x12c virtual false final false
  inline void FailStopSong();

  /// @brief Method SeekTo addr 0x2268968 size 0x1c virtual true final true
  inline void SeekTo(float_t songTime);

  static inline ::GlobalNamespace::GameSongController* New_ctor();

  /// @brief Method .ctor addr 0x2268984 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <FailStopSong>b__14_0 addr 0x2268994 size 0x1c virtual false final false
  inline void _FailStopSong_b__14_0();

  // Ctor Parameters [CppParam { name: "", ty: "GameSongController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameSongController(GameSongController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameSongController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameSongController(GameSongController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameSongController();

public:
  /// @brief Field _audioTimeSyncController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _failAudioPitchGainEffect, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioPitchGainEffect* ____failAudioPitchGainEffect;

  /// @brief Field _beatmapCallbacksController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _beatmapCallbacksUpdater, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksUpdater* ____beatmapCallbacksUpdater;

  /// @brief Field _songDidFinish, offset: 0x40, size: 0x1, def value: None
  bool ____songDidFinish;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameSongController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameSongController*, "", "GameSongController");
