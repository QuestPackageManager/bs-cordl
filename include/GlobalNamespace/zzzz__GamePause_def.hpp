#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePause.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GamePause)
namespace GlobalNamespace {
class AudioListenerController;
}
namespace GlobalNamespace {
class BeatmapObjectExecutionRatingsRecorder;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class SongController;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GamePause;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GamePause);
// Dependencies IGamePause, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePause
class CORDL_TYPE GamePause : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioListenerController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioListenerController, put = __cordl_internal_set__audioListenerController)) ::UnityW<::GlobalNamespace::AudioListenerController>
      _audioListenerController;

  /// @brief Field _beatmapObjectExecutionRatingsRecorder, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectExecutionRatingsRecorder,
                      put = __cordl_internal_set__beatmapObjectExecutionRatingsRecorder)) ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>
      _beatmapObjectExecutionRatingsRecorder;

  /// @brief Field _gameEnergyCounter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter)) ::UnityW<::GlobalNamespace::GameEnergyCounter> _gameEnergyCounter;

  /// @brief Field _pause, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__pause, put = __cordl_internal_set__pause)) bool _pause;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeadAndObstacleInteraction,
                      put = __cordl_internal_set__playerHeadAndObstacleInteraction)) ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>
      _playerHeadAndObstacleInteraction;

  /// @brief Field _saberManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__saberManager, put = __cordl_internal_set__saberManager)) ::UnityW<::GlobalNamespace::SaberManager> _saberManager;

  /// @brief Field _scoreController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _songController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songController, put = __cordl_internal_set__songController)) ::UnityW<::GlobalNamespace::SongController> _songController;

  /// @brief Field didPauseEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didPauseEvent, put = __cordl_internal_set_didPauseEvent)) ::System::Action* didPauseEvent;

  /// @brief Field didResumeEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didResumeEvent, put = __cordl_internal_set_didResumeEvent)) ::System::Action* didResumeEvent;

  __declspec(property(get = get_isPaused)) bool isPaused;

  /// @brief Field willResumeEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_willResumeEvent, put = __cordl_internal_set_willResumeEvent)) ::System::Action* willResumeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IGamePause"
  constexpr operator ::GlobalNamespace::IGamePause*() noexcept;

  static inline ::GlobalNamespace::GamePause* New_ctor();

  /// @brief Method Pause, addr 0x3ba6420, size 0x150, virtual true, abstract: false, final true
  inline void Pause();

  /// @brief Method Resume, addr 0x3ba6594, size 0x14c, virtual true, abstract: false, final true
  inline void Resume();

  /// @brief Method WillResume, addr 0x3ba6570, size 0x24, virtual true, abstract: false, final true
  inline void WillResume();

  constexpr ::UnityW<::GlobalNamespace::AudioListenerController> const& __cordl_internal_get__audioListenerController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioListenerController>& __cordl_internal_get__audioListenerController();

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> const& __cordl_internal_get__beatmapObjectExecutionRatingsRecorder() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>& __cordl_internal_get__beatmapObjectExecutionRatingsRecorder();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__gameEnergyCounter();

  constexpr bool const& __cordl_internal_get__pause() const;

  constexpr bool& __cordl_internal_get__pause();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& __cordl_internal_get__playerHeadAndObstacleInteraction() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& __cordl_internal_get__playerHeadAndObstacleInteraction();

  constexpr ::UnityW<::GlobalNamespace::SaberManager> const& __cordl_internal_get__saberManager() const;

  constexpr ::UnityW<::GlobalNamespace::SaberManager>& __cordl_internal_get__saberManager();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::UnityW<::GlobalNamespace::SongController> const& __cordl_internal_get__songController() const;

  constexpr ::UnityW<::GlobalNamespace::SongController>& __cordl_internal_get__songController();

  constexpr ::System::Action* const& __cordl_internal_get_didPauseEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPauseEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didResumeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didResumeEvent();

  constexpr ::System::Action* const& __cordl_internal_get_willResumeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_willResumeEvent();

  constexpr void __cordl_internal_set__audioListenerController(::UnityW<::GlobalNamespace::AudioListenerController> value);

  constexpr void __cordl_internal_set__beatmapObjectExecutionRatingsRecorder(::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> value);

  constexpr void __cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  constexpr void __cordl_internal_set__pause(bool value);

  constexpr void __cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value);

  constexpr void __cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr void __cordl_internal_set__songController(::UnityW<::GlobalNamespace::SongController> value);

  constexpr void __cordl_internal_set_didPauseEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didResumeEvent(::System::Action* value);

  constexpr void __cordl_internal_set_willResumeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ba66e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPauseEvent, addr 0x3ba6078, size 0x9c, virtual true, abstract: false, final true
  inline void add_didPauseEvent(::System::Action* value);

  /// @brief Method add_didResumeEvent, addr 0x3ba62e8, size 0x9c, virtual true, abstract: false, final true
  inline void add_didResumeEvent(::System::Action* value);

  /// @brief Method add_willResumeEvent, addr 0x3ba61b0, size 0x9c, virtual true, abstract: false, final true
  inline void add_willResumeEvent(::System::Action* value);

  /// @brief Method get_isPaused, addr 0x3ba6070, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPaused();

  /// @brief Convert to "::GlobalNamespace::IGamePause"
  constexpr ::GlobalNamespace::IGamePause* i___GlobalNamespace__IGamePause() noexcept;

  /// @brief Method remove_didPauseEvent, addr 0x3ba6114, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didPauseEvent(::System::Action* value);

  /// @brief Method remove_didResumeEvent, addr 0x3ba6384, size 0x9c, virtual true, abstract: false, final true
  inline void remove_didResumeEvent(::System::Action* value);

  /// @brief Method remove_willResumeEvent, addr 0x3ba624c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_willResumeEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GamePause();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GamePause", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GamePause(GamePause&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GamePause", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GamePause(GamePause const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4427 };

  /// @brief Field didPauseEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didPauseEvent;

  /// @brief Field willResumeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___willResumeEvent;

  /// @brief Field didResumeEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___didResumeEvent;

  /// @brief Field _gameEnergyCounter, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____gameEnergyCounter;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> ____playerHeadAndObstacleInteraction;

  /// @brief Field _scoreController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _beatmapObjectExecutionRatingsRecorder, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> ____beatmapObjectExecutionRatingsRecorder;

  /// @brief Field _songController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongController> ____songController;

  /// @brief Field _saberManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberManager> ____saberManager;

  /// @brief Field _audioListenerController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioListenerController> ____audioListenerController;

  /// @brief Field _pause, offset: 0x60, size: 0x1, def value: None
  bool ____pause;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePause, ___didPauseEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ___willResumeEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ___didResumeEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____gameEnergyCounter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____playerHeadAndObstacleInteraction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____scoreController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____beatmapObjectExecutionRatingsRecorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____songController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____saberManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____audioListenerController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePause, ____pause) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GamePause, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GamePause*, "", "GamePause");
