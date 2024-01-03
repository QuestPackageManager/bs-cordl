#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerFacade)
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __MultiplayerLocalActivePlayerFacade__Factory;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerIntroAnimator;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class IStartSeekSongController;
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
// Type: ::MultiplayerLocalActivePlayerFacade
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5151))
// CS Name: ::MultiplayerLocalActivePlayerFacade*
class CORDL_TYPE MultiplayerLocalActivePlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Factory = ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory;

  /// @brief Field _activeOnlyGameObjects, offset 0x18, size 0x8
  __declspec(property(get = __get__activeOnlyGameObjects, put = __set__activeOnlyGameObjects))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _activeOnlyGameObjects;

  /// @brief Field _outroAnimator, offset 0x20, size 0x8
  __declspec(property(get = __get__outroAnimator, put = __set__outroAnimator))::UnityEngine::GameObject* _outroAnimator;

  /// @brief Field _songController, offset 0x28, size 0x8
  __declspec(property(get = __get__songController, put = __set__songController))::GlobalNamespace::IStartSeekSongController* _songController;

  /// @brief Field _introAnimator, offset 0x30, size 0x8
  __declspec(property(get = __get__introAnimator, put = __set__introAnimator))::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* _introAnimator;

  /// @brief Field _gameSongController, offset 0x38, size 0x8
  __declspec(property(get = __get__gameSongController, put = __set__gameSongController))::GlobalNamespace::GameSongController* _gameSongController;

  /// @brief Field _beatmapObjectManager, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _prepareLevelCompletionResults, offset 0x48, size 0x8
  __declspec(property(get = __get__prepareLevelCompletionResults, put = __set__prepareLevelCompletionResults))::GlobalNamespace::PrepareLevelCompletionResults* _prepareLevelCompletionResults;

  /// @brief Field _beatmapCallbacksUpdater, offset 0x50, size 0x8
  __declspec(property(get = __get__beatmapCallbacksUpdater, put = __set__beatmapCallbacksUpdater))::GlobalNamespace::BeatmapCallbacksUpdater* _beatmapCallbacksUpdater;

  /// @brief Field playerDidFinishEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_playerDidFinishEvent, put = __set_playerDidFinishEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerDidFinishEvent;

  /// @brief Field playerNetworkDidFailedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_playerNetworkDidFailedEvent,
                      put = __set_playerNetworkDidFailedEvent))::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* playerNetworkDidFailedEvent;

  __declspec(property(get = get_introAnimator))::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* introAnimator;

  __declspec(property(get = get_outroAnimator))::UnityEngine::GameObject* outroAnimator;

  __declspec(property(get = get_songController))::GlobalNamespace::IStartSeekSongController* songController;

  __declspec(property(get = get_currentLocalPlayerLevelCompletionResult))::GlobalNamespace::LevelCompletionResults* currentLocalPlayerLevelCompletionResult;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
  constexpr operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
  constexpr operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept;

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__activeOnlyGameObjects();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__activeOnlyGameObjects() const;

  constexpr void __set__activeOnlyGameObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  constexpr ::UnityEngine::GameObject*& __get__outroAnimator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__outroAnimator() const;

  constexpr void __set__outroAnimator(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::IStartSeekSongController*& __get__songController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IStartSeekSongController*> const& __get__songController() const;

  constexpr void __set__songController(::GlobalNamespace::IStartSeekSongController* value);

  constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*& __get__introAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*> const& __get__introAnimator() const;

  constexpr void __set__introAnimator(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* value);

  constexpr ::GlobalNamespace::GameSongController*& __get__gameSongController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> const& __get__gameSongController() const;

  constexpr void __set__gameSongController(::GlobalNamespace::GameSongController* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& __get__prepareLevelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const& __get__prepareLevelCompletionResults() const;

  constexpr void __set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksUpdater*& __get__beatmapCallbacksUpdater();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksUpdater*> const& __get__beatmapCallbacksUpdater() const;

  constexpr void __set__beatmapCallbacksUpdater(::GlobalNamespace::BeatmapCallbacksUpdater* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_playerDidFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_playerDidFinishEvent() const;

  constexpr void __set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& __get_playerNetworkDidFailedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const& __get_playerNetworkDidFailedEvent() const;

  constexpr void __set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method get_introAnimator, addr 0x23da6e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* get_introAnimator();

  /// @brief Method get_outroAnimator, addr 0x23da6e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_outroAnimator();

  /// @brief Method get_songController, addr 0x23da6f0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  /// @brief Method get_currentLocalPlayerLevelCompletionResult, addr 0x23da6f8, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LevelCompletionResults* get_currentLocalPlayerLevelCompletionResult();

  /// @brief Method add_playerDidFinishEvent, addr 0x23da71c, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerDidFinishEvent, addr 0x23da7cc, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method add_playerNetworkDidFailedEvent, addr 0x23da87c, size 0xb0, virtual true, abstract: false, final true
  inline void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method remove_playerNetworkDidFailedEvent, addr 0x23da92c, size 0xb0, virtual true, abstract: false, final true
  inline void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value);

  /// @brief Method ReportPlayerDidFinish, addr 0x23da9dc, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method ReportPlayerNetworkDidFailed, addr 0x23da9f8, size 0x1c, virtual true, abstract: false, final true
  inline void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results);

  /// @brief Method DisablePlayer, addr 0x23daa14, size 0x64, virtual false, abstract: false, final false
  inline void DisablePlayer();

  /// @brief Method PauseSpawning, addr 0x23daa78, size 0x1c, virtual false, abstract: false, final false
  inline void PauseSpawning();

  /// @brief Method ResumeSpawning, addr 0x23daa94, size 0x1c, virtual false, abstract: false, final false
  inline void ResumeSpawning();

  /// @brief Method __ForceStopSong, addr 0x23daab0, size 0x34, virtual false, abstract: false, final false
  inline void __ForceStopSong();

  /// @brief Method __GetActiveOnlyGameObjects, addr 0x23daae4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> __GetActiveOnlyGameObjects();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* New_ctor();

  /// @brief Method .ctor, addr 0x23daaec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerFacade(MultiplayerLocalActivePlayerFacade&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerFacade(MultiplayerLocalActivePlayerFacade const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerFacade();

public:
  /// @brief Field _activeOnlyGameObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____activeOnlyGameObjects;

  /// @brief Field _outroAnimator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____outroAnimator;

  /// @brief Field _songController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IStartSeekSongController* ____songController;

  /// @brief Field _introAnimator, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* ____introAnimator;

  /// @brief Field _gameSongController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::GameSongController* ____gameSongController;

  /// @brief Field _beatmapObjectManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _prepareLevelCompletionResults, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PrepareLevelCompletionResults* ____prepareLevelCompletionResults;

  /// @brief Field _beatmapCallbacksUpdater, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksUpdater* ____beatmapCallbacksUpdater;

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
// Type: ::Factory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5239)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11005), inst: 3490 }),
// TypeDefinitionIndex(TypeDefinitionIndex(5151)), TypeDefinitionIndex(TypeDefinitionIndex(11005))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5150)) CS Name:
// ::MultiplayerLocalActivePlayerFacade::Factory*
class CORDL_TYPE __MultiplayerLocalActivePlayerFacade__Factory
    : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState, ::GlobalNamespace::MultiplayerLocalActivePlayerFacade*> {
public:
  // Declarations
  static inline ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* New_ctor();

  /// @brief Method .ctor, addr 0x23daaf4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerFacade__Factory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerLocalActivePlayerFacade__Factory(__MultiplayerLocalActivePlayerFacade__Factory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerLocalActivePlayerFacade__Factory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerLocalActivePlayerFacade__Factory(__MultiplayerLocalActivePlayerFacade__Factory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerLocalActivePlayerFacade__Factory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerFacade*, "", "MultiplayerLocalActivePlayerFacade");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*, "", "MultiplayerLocalActivePlayerFacade/Factory");
