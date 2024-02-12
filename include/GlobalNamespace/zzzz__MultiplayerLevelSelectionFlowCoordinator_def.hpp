#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct SongPackMask;
}
namespace GlobalNamespace {
class __LevelSelectionFlowCoordinator__State;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
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
// Type: ::MultiplayerLevelSelectionFlowCoordinator
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 305, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4805)), TypeDefinitionIndex(TypeDefinitionIndex(14920)), TypeDefinitionIndex(TypeDefinitionIndex(15103))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4821))
// CS Name: ::MultiplayerLevelSelectionFlowCoordinator*
class CORDL_TYPE MultiplayerLevelSelectionFlowCoordinator : public ::GlobalNamespace::LevelSelectionFlowCoordinator {
public:
  // Declarations
  /// @brief Field _notAllowedCharacteristics, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__notAllowedCharacteristics,
                      put = __cordl_internal_set__notAllowedCharacteristics))::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>,
                                                                                      ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> _notAllowedCharacteristics;

  /// @brief Field _lobbyGameStateController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateController,
                      put = __cordl_internal_set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field didSelectLevelEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectLevelEvent,
                      put = __cordl_internal_set_didSelectLevelEvent))::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>* didSelectLevelEvent;

  /// @brief Field didFinishedEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishedEvent, put = __cordl_internal_set_didFinishedEvent))::System::Action* didFinishedEvent;

  /// @brief Field _actionButtonText, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonText, put = __cordl_internal_set__actionButtonText))::StringW _actionButtonText;

  /// @brief Field _titleText, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText))::StringW _titleText;

  /// @brief Field _songPackMask, offset 0x100, size 0x20
  __declspec(property(get = __cordl_internal_get__songPackMask, put = __cordl_internal_set__songPackMask))::GlobalNamespace::SongPackMask _songPackMask;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _state, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::__LevelSelectionFlowCoordinator__State* _state;

  /// @brief Field _isBeingFinished, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get__isBeingFinished, put = __cordl_internal_set__isBeingFinished)) bool _isBeingFinished;

  __declspec(property(get = get_hidePracticeButton)) bool hidePracticeButton;

  __declspec(property(get = get_hidePacksIfOneOrNone)) bool hidePacksIfOneOrNone;

  __declspec(property(get = get_actionButtonText))::StringW actionButtonText;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_songPackMask))::GlobalNamespace::SongPackMask songPackMask;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask;

  __declspec(property(
      get = get_notAllowedCharacteristics))::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> notAllowedCharacteristics;

  __declspec(property(get = get_mainTitle))::StringW mainTitle;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__notAllowedCharacteristics();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __cordl_internal_get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __cordl_internal_get__lobbyGameStateController() const;

  constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr ::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>*& __cordl_internal_get_didSelectLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>*> const& __cordl_internal_get_didSelectLevelEvent() const;

  constexpr void __cordl_internal_set_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>* value);

  constexpr ::System::Action*& __cordl_internal_get_didFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didFinishedEvent() const;

  constexpr void __cordl_internal_set_didFinishedEvent(::System::Action* value);

  constexpr ::StringW& __cordl_internal_get__actionButtonText();

  constexpr ::StringW const& __cordl_internal_get__actionButtonText() const;

  constexpr void __cordl_internal_set__actionButtonText(::StringW value);

  constexpr ::StringW& __cordl_internal_get__titleText();

  constexpr ::StringW const& __cordl_internal_get__titleText() const;

  constexpr void __cordl_internal_set__titleText(::StringW value);

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get__songPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get__songPackMask() const;

  constexpr void __cordl_internal_set__songPackMask(::GlobalNamespace::SongPackMask value);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const& __cordl_internal_get__state() const;

  constexpr void __cordl_internal_set__state(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value);

  constexpr bool& __cordl_internal_get__isBeingFinished();

  constexpr bool const& __cordl_internal_get__isBeingFinished() const;

  constexpr void __cordl_internal_set__isBeingFinished(bool value);

  /// @brief Method add_didSelectLevelEvent, addr 0x23eb2c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>* value);

  /// @brief Method remove_didSelectLevelEvent, addr 0x23ec92c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelEvent(::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>* value);

  /// @brief Method add_didFinishedEvent, addr 0x23eb378, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishedEvent(::System::Action* value);

  /// @brief Method remove_didFinishedEvent, addr 0x23ec9dc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishedEvent(::System::Action* value);

  /// @brief Method get_hidePracticeButton, addr 0x23f52e4, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePracticeButton();

  /// @brief Method get_hidePacksIfOneOrNone, addr 0x23f52ec, size 0x8, virtual true, abstract: false, final false
  inline bool get_hidePacksIfOneOrNone();

  /// @brief Method get_actionButtonText, addr 0x23f52f4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_actionButtonText();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x23f52fc, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_songPackMask, addr 0x23f5304, size 0xc, virtual true, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask get_songPackMask();

  /// @brief Method get_enableCustomLevels, addr 0x23f5310, size 0x8, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_allowedBeatmapDifficultyMask, addr 0x23f5318, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask();

  /// @brief Method get_notAllowedCharacteristics, addr 0x23f5320, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> get_notAllowedCharacteristics();

  /// @brief Method get_mainTitle, addr 0x23f5328, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method ActionButtonWasPressed, addr 0x23f5330, size 0x118, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method BackButtonWasPressed, addr 0x23f5448, size 0x60, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x23f54a8, size 0x104, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method TransitionDidStart, addr 0x23f55ac, size 0x11c, virtual true, abstract: false, final false
  inline void TransitionDidStart();

  /// @brief Method TransitionDidFinish, addr 0x23f56c8, size 0x21c, virtual true, abstract: false, final false
  inline void TransitionDidFinish();

  /// @brief Method Setup, addr 0x23ee3a8, size 0x20, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state, ::GlobalNamespace::SongPackMask songPackMask,
                    ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::StringW actionText, ::StringW titleText);

  /// @brief Method HandleLobbyGameStateControllerGameStarted, addr 0x23f5958, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerGameStarted(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method DismissViewControllersAndFinish, addr 0x23f58e4, size 0x74, virtual false, abstract: false, final false
  inline void DismissViewControllersAndFinish();

  static inline ::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x23f595c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelSelectionFlowCoordinator(MultiplayerLevelSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelSelectionFlowCoordinator(MultiplayerLevelSelectionFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelSelectionFlowCoordinator();

public:
  /// @brief Field _notAllowedCharacteristics, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____notAllowedCharacteristics;

  /// @brief Field _lobbyGameStateController, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field didSelectLevelEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>* ___didSelectLevelEvent;

  /// @brief Field didFinishedEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action* ___didFinishedEvent;

  /// @brief Field _actionButtonText, offset: 0xf0, size: 0x8, def value: None
  ::StringW ____actionButtonText;

  /// @brief Field _titleText, offset: 0xf8, size: 0x8, def value: None
  ::StringW ____titleText;

  /// @brief Field _songPackMask, offset: 0x100, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ____songPackMask;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0x120, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _state, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* ____state;

  /// @brief Field _isBeingFinished, offset: 0x130, size: 0x1, def value: None
  bool ____isBeingFinished;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, 0x138>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____notAllowedCharacteristics) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____lobbyGameStateController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ___didSelectLevelEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ___didFinishedEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____actionButtonText) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____titleText) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____songPackMask) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____allowedBeatmapDifficultyMask) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____state) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator, ____isBeingFinished) == 0x130, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*, "", "MultiplayerLevelSelectionFlowCoordinator");
