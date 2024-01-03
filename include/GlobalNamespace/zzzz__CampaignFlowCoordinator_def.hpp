#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CampaignFlowCoordinator)
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionHelpViewController;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionResultsViewController;
}
namespace GlobalNamespace {
class MissionSelectionNavigationController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass20_0;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass22_0;
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
class CampaignFlowCoordinator;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass20_0;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass22_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CampaignFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0);
MARK_REF_PTR_T(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0);
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5487))
// CS Name: ::CampaignFlowCoordinator::<>c__DisplayClass20_0*
class CORDL_TYPE __CampaignFlowCoordinator____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::CampaignFlowCoordinator* __4__this;

  /// @brief Field viewController, offset 0x18, size 0x8
  __declspec(property(get = __get_viewController, put = __set_viewController))::GlobalNamespace::MissionHelpViewController* viewController;

  constexpr ::GlobalNamespace::CampaignFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::CampaignFlowCoordinator* value);

  constexpr ::GlobalNamespace::MissionHelpViewController*& __get_viewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpViewController*> const& __get_viewController() const;

  constexpr void __set_viewController(::GlobalNamespace::MissionHelpViewController* value);

  static inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0* New_ctor();

  /// @brief Method .ctor, addr 0x2287858, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleMissionHelpViewControllerDidFinish>b__0, addr 0x2287d20, size 0x50, virtual false, abstract: false, final false
  inline void _HandleMissionHelpViewControllerDidFinish_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CampaignFlowCoordinator____c__DisplayClass20_0(__CampaignFlowCoordinator____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CampaignFlowCoordinator____c__DisplayClass20_0(__CampaignFlowCoordinator____c__DisplayClass20_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CampaignFlowCoordinator____c__DisplayClass20_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CampaignFlowCoordinator* _____4__this;

  /// @brief Field viewController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionHelpViewController* ___viewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0, ___viewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5488))
// CS Name: ::CampaignFlowCoordinator::<>c__DisplayClass22_0*
class CORDL_TYPE __CampaignFlowCoordinator____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::CampaignFlowCoordinator* __4__this;

  /// @brief Field viewController, offset 0x18, size 0x8
  __declspec(property(get = __get_viewController, put = __set_viewController))::GlobalNamespace::MissionResultsViewController* viewController;

  constexpr ::GlobalNamespace::CampaignFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::CampaignFlowCoordinator* value);

  constexpr ::GlobalNamespace::MissionResultsViewController*& __get_viewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> const& __get_viewController() const;

  constexpr void __set_viewController(::GlobalNamespace::MissionResultsViewController* value);

  static inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0* New_ctor();

  /// @brief Method .ctor, addr 0x22879c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleMissionResultsViewControllerRetryButtonPressed>b__0, addr 0x2287d70, size 0x50, virtual false, abstract: false, final false
  inline void _HandleMissionResultsViewControllerRetryButtonPressed_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CampaignFlowCoordinator____c__DisplayClass22_0(__CampaignFlowCoordinator____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CampaignFlowCoordinator____c__DisplayClass22_0(__CampaignFlowCoordinator____c__DisplayClass22_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CampaignFlowCoordinator____c__DisplayClass22_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CampaignFlowCoordinator* _____4__this;

  /// @brief Field viewController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionResultsViewController* ___viewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, ___viewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CampaignFlowCoordinator
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 273, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5489))
// CS Name: ::CampaignFlowCoordinator*
class CORDL_TYPE CampaignFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass22_0 = ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0;

  using __c__DisplayClass20_0 = ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0;

  /// @brief Field _defaultLightsPreset, offset 0xa8, size 0x8
  __declspec(property(get = __get__defaultLightsPreset, put = __set__defaultLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset 0xb0, size 0x8
  __declspec(property(get = __get__resultsClearedLightsPreset, put = __set__resultsClearedLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset 0xb8, size 0x8
  __declspec(property(get = __get__resultsFailedLightsPreset, put = __set__resultsFailedLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _resultsFailedLightsPreset;

  /// @brief Field _newObjectiveLightsPreset, offset 0xc0, size 0x8
  __declspec(property(get = __get__newObjectiveLightsPreset, put = __set__newObjectiveLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _newObjectiveLightsPreset;

  /// @brief Field _menuTransitionsHelper, offset 0xc8, size 0x8
  __declspec(property(get = __get__menuTransitionsHelper, put = __set__menuTransitionsHelper))::GlobalNamespace::MenuTransitionsHelper* _menuTransitionsHelper;

  /// @brief Field _menuLightsManager, offset 0xd0, size 0x8
  __declspec(property(get = __get__menuLightsManager, put = __set__menuLightsManager))::GlobalNamespace::MenuLightsManager* _menuLightsManager;

  /// @brief Field _missionSelectionNavigationController, offset 0xd8, size 0x8
  __declspec(property(get = __get__missionSelectionNavigationController,
                      put = __set__missionSelectionNavigationController))::GlobalNamespace::MissionSelectionNavigationController* _missionSelectionNavigationController;

  /// @brief Field _missionResultsViewController, offset 0xe0, size 0x8
  __declspec(property(get = __get__missionResultsViewController, put = __set__missionResultsViewController))::GlobalNamespace::MissionResultsViewController* _missionResultsViewController;

  /// @brief Field _gameplaySetupViewController, offset 0xe8, size 0x8
  __declspec(property(get = __get__gameplaySetupViewController, put = __set__gameplaySetupViewController))::GlobalNamespace::GameplaySetupViewController* _gameplaySetupViewController;

  /// @brief Field _missionHelpViewController, offset 0xf0, size 0x8
  __declspec(property(get = __get__missionHelpViewController, put = __set__missionHelpViewController))::GlobalNamespace::MissionHelpViewController* _missionHelpViewController;

  /// @brief Field _playerDataModel, offset 0xf8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _campaignProgressModel, offset 0x100, size 0x8
  __declspec(property(get = __get__campaignProgressModel, put = __set__campaignProgressModel))::GlobalNamespace::CampaignProgressModel* _campaignProgressModel;

  /// @brief Field didFinishEvent, offset 0x108, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* didFinishEvent;

  /// @brief Field _showCredits, offset 0x110, size 0x1
  __declspec(property(get = __get__showCredits, put = __set__showCredits)) bool _showCredits;

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__defaultLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__defaultLightsPreset() const;

  constexpr void __set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__resultsClearedLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__resultsClearedLightsPreset() const;

  constexpr void __set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__resultsFailedLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__resultsFailedLightsPreset() const;

  constexpr void __set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__newObjectiveLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__newObjectiveLightsPreset() const;

  constexpr void __set__newObjectiveLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get__menuTransitionsHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get__menuTransitionsHelper() const;

  constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::MenuLightsManager*& __get__menuLightsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& __get__menuLightsManager() const;

  constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager* value);

  constexpr ::GlobalNamespace::MissionSelectionNavigationController*& __get__missionSelectionNavigationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionNavigationController*> const& __get__missionSelectionNavigationController() const;

  constexpr void __set__missionSelectionNavigationController(::GlobalNamespace::MissionSelectionNavigationController* value);

  constexpr ::GlobalNamespace::MissionResultsViewController*& __get__missionResultsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionResultsViewController*> const& __get__missionResultsViewController() const;

  constexpr void __set__missionResultsViewController(::GlobalNamespace::MissionResultsViewController* value);

  constexpr ::GlobalNamespace::GameplaySetupViewController*& __get__gameplaySetupViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> const& __get__gameplaySetupViewController() const;

  constexpr void __set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController* value);

  constexpr ::GlobalNamespace::MissionHelpViewController*& __get__missionHelpViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionHelpViewController*> const& __get__missionHelpViewController() const;

  constexpr void __set__missionHelpViewController(::GlobalNamespace::MissionHelpViewController* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::CampaignProgressModel*& __get__campaignProgressModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignProgressModel*> const& __get__campaignProgressModel() const;

  constexpr void __set__campaignProgressModel(::GlobalNamespace::CampaignProgressModel* value);

  constexpr ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* value);

  constexpr bool& __get__showCredits();

  constexpr bool const& __get__showCredits() const;

  constexpr void __set__showCredits(bool value);

  /// @brief Method add_didFinishEvent, addr 0x2286e58, size 0xb4, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x2286f0c, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* value);

  /// @brief Method DidActivate, addr 0x2286fc0, size 0x254, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2287214, size 0x1b8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method TopViewControllerWillChange, addr 0x22873cc, size 0xf8, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method HandleMissionSelectionNavigationControllerDidPressPlayButton, addr 0x22874c4, size 0x120, virtual false, abstract: false, final false
  inline void HandleMissionSelectionNavigationControllerDidPressPlayButton(::GlobalNamespace::MissionSelectionNavigationController* viewController);

  /// @brief Method HandleMissionHelpViewControllerDidFinish, addr 0x228779c, size 0xbc, virtual false, abstract: false, final false
  inline void HandleMissionHelpViewControllerDidFinish(::GlobalNamespace::MissionHelpViewController* viewController);

  /// @brief Method HandleMissionResultsViewControllerContinueButtonPressed, addr 0x2287860, size 0xac, virtual false, abstract: false, final false
  inline void HandleMissionResultsViewControllerContinueButtonPressed(::GlobalNamespace::MissionResultsViewController* viewController);

  /// @brief Method HandleMissionResultsViewControllerRetryButtonPressed, addr 0x228790c, size 0xbc, virtual false, abstract: false, final false
  inline void HandleMissionResultsViewControllerRetryButtonPressed(::GlobalNamespace::MissionResultsViewController* viewController);

  /// @brief Method StartLevel, addr 0x22875e4, size 0x1b8, virtual false, abstract: false, final false
  inline void StartLevel(::System::Action* beforeSceneSwitchCallback);

  /// @brief Method HandleMissionLevelSceneDidFinish, addr 0x22879d0, size 0xe0, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMissionLevelSceneRestarted, addr 0x2287b78, size 0x3c, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneRestarted(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method UpdatePlayerStatistics, addr 0x2287ab0, size 0xc8, virtual false, abstract: false, final false
  inline void UpdatePlayerStatistics(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode);

  /// @brief Method BackButtonWasPressed, addr 0x2287bb4, size 0xa0, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  static inline ::GlobalNamespace::CampaignFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x2287c54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__21_0, addr 0x2287c5c, size 0x8c, virtual false, abstract: false, final false
  inline void _HandleMissionResultsViewControllerContinueButtonPressed_b__21_0();

  /// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__21_1, addr 0x2287ce8, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMissionResultsViewControllerContinueButtonPressed_b__21_1(bool presented);

  // Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CampaignFlowCoordinator(CampaignFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CampaignFlowCoordinator(CampaignFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CampaignFlowCoordinator();

public:
  /// @brief Field _defaultLightsPreset, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____resultsFailedLightsPreset;

  /// @brief Field _newObjectiveLightsPreset, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____newObjectiveLightsPreset;

  /// @brief Field _menuTransitionsHelper, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* ____menuTransitionsHelper;

  /// @brief Field _menuLightsManager, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsManager* ____menuLightsManager;

  /// @brief Field _missionSelectionNavigationController, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::MissionSelectionNavigationController* ____missionSelectionNavigationController;

  /// @brief Field _missionResultsViewController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::MissionResultsViewController* ____missionResultsViewController;

  /// @brief Field _gameplaySetupViewController, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::GameplaySetupViewController* ____gameplaySetupViewController;

  /// @brief Field _missionHelpViewController, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::MissionHelpViewController* ____missionHelpViewController;

  /// @brief Field _playerDataModel, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _campaignProgressModel, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::CampaignProgressModel* ____campaignProgressModel;

  /// @brief Field didFinishEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::CampaignFlowCoordinator*>* ___didFinishEvent;

  /// @brief Field _showCredits, offset: 0x110, size: 0x1, def value: None
  bool ____showCredits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CampaignFlowCoordinator, 0x118>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____defaultLightsPreset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____resultsClearedLightsPreset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____resultsFailedLightsPreset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____newObjectiveLightsPreset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____menuTransitionsHelper) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____menuLightsManager) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____missionSelectionNavigationController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____missionResultsViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____gameplaySetupViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____missionHelpViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____playerDataModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____campaignProgressModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ___didFinishEvent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____showCredits) == 0x110, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CampaignFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignFlowCoordinator*, "", "CampaignFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass20_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass20_0");
NEED_NO_BOX(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass22_0");
