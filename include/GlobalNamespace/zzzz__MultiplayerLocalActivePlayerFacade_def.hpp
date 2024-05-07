#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerFacade.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class MultiplayerLocalActivePlayerIntroAnimator;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerFacade__Factory;
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
class __MultiplayerLocalActivePlayerFacade__Factory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerFacade);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory);
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActivePlayerFacade::Factory*
class CORDL_TYPE __MultiplayerLocalActivePlayerFacade__Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState, ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerFacade>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x26fb4cc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalActivePlayerFacade__Factory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerFacade__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalActivePlayerFacade__Factory(__MultiplayerLocalActivePlayerFacade__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerFacade__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalActivePlayerFacade__Factory(__MultiplayerLocalActivePlayerFacade__Factory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerLocalActivePlayerFacade
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLocalActivePlayerFacade*
class CORDL_TYPE MultiplayerLocalActivePlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory;

  /// @brief Field _activeOnlyGameObjects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__activeOnlyGameObjects,
                      put = __cordl_internal_set__activeOnlyGameObjects))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _activeOnlyGameObjects;

  /// @brief Field _beatmapCallbacksUpdater, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksUpdater,
                      put = __cordl_internal_set__beatmapCallbacksUpdater))::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> _beatmapCallbacksUpdater;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gameSongController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameSongController, put = __cordl_internal_set__gameSongController))::UnityW<::GlobalNamespace::GameSongController> _gameSongController;

  /// @brief Field _introAnimator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__introAnimator, put = __cordl_internal_set__introAnimator))::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> _introAnimator;

  /// @brief Field _outroAnimator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__outroAnimator, put = __cordl_internal_set__outroAnimator))::UnityW<::UnityEngine::GameObject> _outroAnimator;

  /// @brief Field _prepareLevelCompletionResults, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__prepareLevelCompletionResults,
                      put = __cordl_internal_set__prepareLevelCompletionResults))::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> _prepareLevelCompletionResults;

  /// @brief Field _songController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songController, put = __cordl_internal_set__songController))::GlobalNamespace::IStartSeekSongController* _songController;

  __declspec(property(get = get_currentLocalPlayerLevelCompletionResult))::GlobalNamespace::LevelCompletionResults* currentLocalPlayerLevelCompletionResult;

  __declspec(property(get = get_introAnimator))::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> introAnimator;

  __declspec(property(get = get_outroAnimator))::UnityW<::UnityEngine::GameObject> outroAnimator;

  /// @brief Field playerDidFinishEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerDidFinishEvent,
                      put = __cordl_internal_set_playerDidFinishEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_playerNetworkDidFailedEvent,
                      put = __cordl_internal_set_playerNetworkDidFailedEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  __declspec(property(get = get_songController))::GlobalNamespace::IStartSeekSongController* songController;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept;

  /// @brief Method DisablePlayer, addr 0x26fb3ec, size 0x64, virtual false, abstract: false, final false
  inline void DisablePlayer();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* New_ctor();

  /// @brief Method PauseSpawning, addr 0x26fb450, size 0x1c, virtual false, abstract: false, final false
  inline void PauseSpawning();

  /// @brief Method ReportPlayerDidFinish, addr 0x26fb3b4, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ReportPlayerNetworkDidFailed, addr 0x26fb3d0, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ResumeSpawning, addr 0x26fb46c, size 0x1c, virtual false, abstract: false, final false
  inline void ResumeSpawning();

  /// @brief Method __ForceStopSong, addr 0x26fb488, size 0x34, virtual false, abstract: false, final false
  inline void __ForceStopSong();

  /// @brief Method __GetActiveOnlyGameObjects, addr 0x26fb4bc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> __GetActiveOnlyGameObjects();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__activeOnlyGameObjects() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__activeOnlyGameObjects();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> const& __cordl_internal_get__beatmapCallbacksUpdater() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater>& __cordl_internal_get__beatmapCallbacksUpdater();

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController> const& __cordl_internal_get__gameSongController() const;

  constexpr ::UnityW<::GlobalNamespace::GameSongController>& __cordl_internal_get__gameSongController();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> const& __cordl_internal_get__introAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator>& __cordl_internal_get__introAnimator();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__outroAnimator() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__outroAnimator();

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& __cordl_internal_get__prepareLevelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& __cordl_internal_get__prepareLevelCompletionResults();

  constexpr ::GlobalNamespace::IStartSeekSongController*& __cordl_internal_get__songController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IStartSeekSongController*> const& __cordl_internal_get__songController() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __cordl_internal_get_playerDidFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __cordl_internal_get_playerNetworkDidFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __cordl_internal_get_playerNetworkDidFailedEvent() const;

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

  /// @brief Method .ctor, addr 0x26fb4c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerDidFinishEvent, addr 0x26fb0f4, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x26fb254, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method get_currentLocalPlayerLevelCompletionResult, addr 0x26fb0d0, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* get_currentLocalPlayerLevelCompletionResult();

  /// @brief Method get_introAnimator, addr 0x26fb0b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> get_introAnimator();

  /// @brief Method get_outroAnimator, addr 0x26fb0c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_outroAnimator();

  /// @brief Method get_songController, addr 0x26fb0c8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* i___GlobalNamespace__IMultiplayerLevelEndActionsListener() noexcept;

  /// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* i___GlobalNamespace__IMultiplayerLevelEndActionsPublisher() noexcept;

  /// @brief Convert to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr ::GlobalNamespace::IStartSeekSongControllerProvider* i___GlobalNamespace__IStartSeekSongControllerProvider() noexcept;

  /// @brief Method remove_playerDidFinishEvent, addr 0x26fb1a4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x26fb304, size 0xb0, virtual true, abstract: false, final true
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

  /// @brief Field _activeOnlyGameObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____activeOnlyGameObjects;

  /// @brief Field _outroAnimator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____outroAnimator;

  /// @brief Field _songController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IStartSeekSongController* ____songController;

  /// @brief Field _introAnimator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator> ____introAnimator;

  /// @brief Field _gameSongController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameSongController> ____gameSongController;

  /// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> ____prepareLevelCompletionResults;

  /// @brief Field _beatmapCallbacksUpdater, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCallbacksUpdater> ____beatmapCallbacksUpdater;

  /// @brief Field playerDidFinishEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* ___playerNetworkDidFailedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerFacade, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____activeOnlyGameObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____outroAnimator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____songController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____introAnimator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____gameSongController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____beatmapObjectManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____prepareLevelCompletionResults) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ____beatmapCallbacksUpdater) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ___playerDidFinishEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerFacade, ___playerNetworkDidFailedEvent) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*, "", "MultiplayerLocalActivePlayerFacade/Factory");
