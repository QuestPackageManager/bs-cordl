#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelSelectionFlowCoordinator)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator_State;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelSelectionFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator);
// Dependencies BeatmapDifficultyMask, LevelSelectionFlowCoordinator, SongPackMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLevelSelectionFlowCoordinator
class CORDL_TYPE MultiplayerLevelSelectionFlowCoordinator : public ::GlobalNamespace::LevelSelectionFlowCoordinator {
public:
  // Declarations
  /// @brief Field _actionButtonText, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonText, put = __cordl_internal_set__actionButtonText)) ::StringW _actionButtonText;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _isBeingFinished, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get__isBeingFinished, put = __cordl_internal_set__isBeingFinished)) bool _isBeingFinished;

  /// @brief Field _lobbyGameStateController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateController,
                      put = __cordl_internal_set__lobbyGameStateController)) ::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _notAllowedCharacteristics, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__notAllowedCharacteristics,
      put = __cordl_internal_set__notAllowedCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      _notAllowedCharacteristics;

  /// @brief Field _songPackMask, offset 0x108, size 0x20
  __declspec(property(get = __cordl_internal_get__songPackMask, put = __cordl_internal_set__songPackMask)) ::GlobalNamespace::SongPackMask _songPackMask;

  /// @brief Field _state, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::LevelSelectionFlowCoordinator_State* _state;

  /// @brief Field _titleText, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText)) ::StringW _titleText;

  __declspec(property(get = get_actionButtonText)) ::StringW actionButtonText;

  __declspec(property(get = get_allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  /// @brief Field didFinishedEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishedEvent, put = __cordl_internal_set_didFinishedEvent)) ::System::Action* didFinishedEvent;

  /// @brief Field didSelectLevelEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelEvent,
                      put = __cordl_internal_set_didSelectLevelEvent)) ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* didSelectLevelEvent;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_hidePacksIfOneOrNone)) bool hidePacksIfOneOrNone;

  __declspec(property(get = get_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_mainTitle)) ::StringW mainTitle;

  __declspec(property(get = get_notAllowedCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      notAllowedCharacteristics;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_songPackMask)) ::GlobalNamespace::SongPackMask songPackMask;

  /// @brief Method ActionButtonWasPressed, addr 0x3b4fed8, size 0x110, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method BackButtonWasPressed, addr 0x3b4ffe8, size 0x60, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DismissViewControllersAndFinish, addr 0x3b505e0, size 0x74, virtual false, abstract: false, final false
  inline void DismissViewControllersAndFinish();

  /// @brief Method HandleLobbyGameStateControllerGameStarted, addr 0x3b50678, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method HandleLobbyGameStateControllerLobbyDisconnected, addr 0x3b5067c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLobbyDisconnected();

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x3b50048, size 0x104, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::ViewController_AnimationType animationType);

  static inline ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method Setup, addr 0x3b50654, size 0x24, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::LevelSelectionFlowCoordinator_State* state, ::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                    ::StringW actionText, ::StringW titleText);

  /// @brief Method TransitionDidFinish, addr 0x3b5031c, size 0x2c4, virtual true, abstract: false, final false
  inline void TransitionDidFinish();

  /// @brief Method TransitionDidStart, addr 0x3b5014c, size 0x1d0, virtual true, abstract: false, final false
  inline void TransitionDidStart();

  constexpr ::StringW const& __cordl_internal_get__actionButtonText() const;

  constexpr ::StringW& __cordl_internal_get__actionButtonText();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr bool const& __cordl_internal_get__isBeingFinished() const;

  constexpr bool& __cordl_internal_get__isBeingFinished();

  constexpr ::GlobalNamespace::ILobbyGameStateController* const& __cordl_internal_get__lobbyGameStateController() const;

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __cordl_internal_get__lobbyGameStateController();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__notAllowedCharacteristics();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get__songPackMask() const;

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get__songPackMask();

  constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State* const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State*& __cordl_internal_get__state();

  constexpr ::StringW const& __cordl_internal_get__titleText() const;

  constexpr ::StringW& __cordl_internal_get__titleText();

  constexpr ::System::Action* const& __cordl_internal_get_didFinishedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didFinishedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* const& __cordl_internal_get_didSelectLevelEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>*& __cordl_internal_get_didSelectLevelEvent();

  constexpr void __cordl_internal_set__actionButtonText(::StringW value);

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set__isBeingFinished(bool value);

  constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  constexpr void __cordl_internal_set__songPackMask(::GlobalNamespace::SongPackMask value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::LevelSelectionFlowCoordinator_State* value);

  constexpr void __cordl_internal_set__titleText(::StringW value);

  constexpr void __cordl_internal_set_didFinishedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* value);

  /// @brief Method .ctor, addr 0x3b50680, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishedEvent, addr 0x3b4fd50, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishedEvent(::System::Action* value);

  /// @brief Method add_didSelectLevelEvent, addr 0x3b4fbf0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* value);

  /// @brief Method get_actionButtonText, addr 0x3b4fe98, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_actionButtonText();

  /// @brief Method get_allowedBeatmapDifficultyMask, addr 0x3b4fec0, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();

  /// @brief Method get_enableCustomLevels, addr 0x3b4feb8, size 0x8, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_hidePacksIfOneOrNone, addr 0x3b4fe90, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePacksIfOneOrNone();

  /// @brief Method get_hidePracticeButton, addr 0x3b4fe88, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePracticeButton();

  /// @brief Method get_mainTitle, addr 0x3b4fed0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method get_notAllowedCharacteristics, addr 0x3b4fec8, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> get_notAllowedCharacteristics();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x3b4fea0, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_songPackMask, addr 0x3b4fea8, size 0x10, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

  /// @brief Method remove_didFinishedEvent, addr 0x3b4fdec, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishedEvent(::System::Action* value);

  /// @brief Method remove_didSelectLevelEvent, addr 0x3b4fca0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelSelectionFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelSelectionFlowCoordinator(MultiplayerLevelSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelSelectionFlowCoordinator(MultiplayerLevelSelectionFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5298 };

  /// @brief Field _notAllowedCharacteristics, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____notAllowedCharacteristics;

  /// @brief Field _lobbyGameStateController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field didSelectLevelEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>* ___didSelectLevelEvent;

  /// @brief Field didFinishedEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action* ___didFinishedEvent;

  /// @brief Field _actionButtonText, offset: 0xf8, size: 0x8, def value: None
  ::StringW ____actionButtonText;

  /// @brief Field _titleText, offset: 0x100, size: 0x8, def value: None
  ::StringW ____titleText;

  /// @brief Field _songPackMask, offset: 0x108, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ____songPackMask;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0x128, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _state, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::LevelSelectionFlowCoordinator_State* ____state;

  /// @brief Field _isBeingFinished, offset: 0x138, size: 0x1, def value: None
  bool ____isBeingFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____notAllowedCharacteristics) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____lobbyGameStateController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ___didSelectLevelEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ___didFinishedEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____actionButtonText) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____titleText) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____songPackMask) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____allowedBeatmapDifficultyMask) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____state) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____isBeingFinished) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, 0x140>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, "", "MultiplayerLevelSelectionFlowCoordinator");
