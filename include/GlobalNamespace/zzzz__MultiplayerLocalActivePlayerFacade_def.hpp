#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerFacade)
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade_Factory;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerIntroAnimator;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade_Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory);
// Dependencies MultiplayerPlayerStartState, Zenject.PlaceholderFactory`2<TParam1, TValue>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerFacade/Factory
class CORDL_TYPE MultiplayerLocalActivePlayerFacade_Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState, ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>> {
public:
  // Declarations
  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory* New_ctor();

  /// @brief Method .ctor, addr 0x581ada0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerFacade_Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade_Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerFacade_Factory(MultiplayerLocalActivePlayerFacade_Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade_Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerFacade_Factory(MultiplayerLocalActivePlayerFacade_Factory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerFacade
class CORDL_TYPE MultiplayerLocalActivePlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory;

  /// @brief Field _activeOnlyGameObjects, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__activeOnlyGameObjects,
                      put = __cordl_internal_set__activeOnlyGameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _activeOnlyGameObjects;

  /// @brief Field _beatmapCallbacksUpdater, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksUpdater, put = __cordl_internal_set__beatmapCallbacksUpdater)) ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater>
      _beatmapCallbacksUpdater;

  /// @brief Field _beatmapObjectManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gameSongController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController)) ::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _introAnimator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__introAnimator, put = __cordl_internal_set__introAnimator)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> _introAnimator;

  /// @brief Field _outroAnimator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__outroAnimator, put = __cordl_internal_set__outroAnimator)) ::UnityW<::UnityEngine::GameObject> _outroAnimator;

  /// @brief Field _prepareLevelCompletionResults, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults, put = __cordl_internal_set__prepareLevelCompletionResults)) ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>
      _prepareLevelCompletionResults;

  /// @brief Field _songController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__songController, put = __cordl_internal_set__songController)) ::GlobalNamespace::IStartSeekSongController* _songController;

  __declspec(property(get = get_currentLocalPlayerLevelCompletionResult)) ::GlobalNamespace::LevelCompletionResults* currentLocalPlayerLevelCompletionResult;

  __declspec(property(get = get_introAnimator)) ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> introAnimator;

  __declspec(property(get = get_outroAnimator)) ::UnityW<::UnityEngine::GameObject> outroAnimator;

  /// @brief Field playerDidFinishEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDidFinishEvent,
                      put = __cordl_internal_set_playerDidFinishEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playerNetworkDidFailedEvent,
                      put = __cordl_internal_set_playerNetworkDidFailedEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  __declspec(property(get = get_songController)) ::GlobalNamespace::IStartSeekSongController* songController;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept;

  /// @brief Method DisablePlayer, addr 0x581acd0, size 0x58, virtual false, abstract: false, final false
  inline void DisablePlayer();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* New_ctor();

  /// @brief Method PauseSpawning, addr 0x581ad28, size 0x1c, virtual false, abstract: false, final false
  inline void PauseSpawning();

  /// @brief Method ReportPlayerDidFinish, addr 0x581ac98, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ReportPlayerNetworkDidFailed, addr 0x581acb4, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ResumeSpawning, addr 0x581ad44, size 0x1c, virtual false, abstract: false, final false
  inline void ResumeSpawning();

  /// @brief Method __ForceStopSong, addr 0x581ad60, size 0x34, virtual false, abstract: false, final false
  inline void __ForceStopSong();

  /// @brief Method __GetActiveOnlyGameObjects, addr 0x581ad94, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> __GetActiveOnlyGameObjects();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__activeOnlyGameObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__activeOnlyGameObjects();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> const& __cordl_internal_get__beatmapCallbacksUpdater() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater>& __cordl_internal_get__beatmapCallbacksUpdater();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> const& __cordl_internal_get__introAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>& __cordl_internal_get__introAnimator();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__outroAnimator() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__outroAnimator();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::GlobalNamespace::IStartSeekSongController* const& __cordl_internal_get__songController() const;

  constexpr ::GlobalNamespace::IStartSeekSongController*& __cordl_internal_get__songController();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* const& __cordl_internal_get_playerDidFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerDidFinishEvent();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* const& __cordl_internal_get_playerNetworkDidFailedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerNetworkDidFailedEvent();

  constexpr void __cordl_internal_set__activeOnlyGameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__beatmapCallbacksUpdater(::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value);

  constexpr void __cordl_internal_set__introAnimator(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> value);

  constexpr void __cordl_internal_set__outroAnimator(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value);

  constexpr void __cordl_internal_set__songController(::GlobalNamespace::IStartSeekSongController* value);

  constexpr void __cordl_internal_set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr void __cordl_internal_set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x581ad9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerDidFinishEvent, addr 0x581a998, size 0xc0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x581ab18, size 0xc0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method get_currentLocalPlayerLevelCompletionResult, addr 0x581a978, size 0x20, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* get_currentLocalPlayerLevelCompletionResult();

  /// @brief Method get_introAnimator, addr 0x581a960, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> get_introAnimator();

  /// @brief Method get_outroAnimator, addr 0x581a968, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_outroAnimator();

  /// @brief Method get_songController, addr 0x581a970, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* i___GlobalNamespace__IMultiplayerLevelEndActionsListener() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* i___GlobalNamespace__IMultiplayerLevelEndActionsPublisher() noexcept;

  /// @brief Convert to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr ::GlobalNamespace::IStartSeekSongControllerProvider* i___GlobalNamespace__IStartSeekSongControllerProvider() noexcept;

  /// @brief Method remove_playerDidFinishEvent, addr 0x581aa58, size 0xc0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x581abd8, size 0xc0, virtual true, abstract: false, final true
  inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerFacade();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerFacade(MultiplayerLocalActivePlayerFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerFacade(MultiplayerLocalActivePlayerFacade const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6097 };

  /// @brief Field _activeOnlyGameObjects, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____activeOnlyGameObjects;

  /// @brief Field _outroAnimator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____outroAnimator;

  /// @brief Field _songController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IStartSeekSongController* ____songController;

  /// @brief Field _introAnimator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> ____introAnimator;

  /// @brief Field _gameSongController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _beatmapObjectManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _beatmapCallbacksUpdater, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> ____beatmapCallbacksUpdater;

  /// @brief Field playerDidFinishEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerNetworkDidFailedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____activeOnlyGameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____outroAnimator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____songController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____introAnimator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____gameSongController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____beatmapObjectManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____prepareLevelCompletionResults) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____beatmapCallbacksUpdater) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ___playerDidFinishEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ___playerNetworkDidFailedEvent) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerFacade, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerFacade_Factory*, "", "MultiplayerLocalActivePlayerFacade/Factory");
