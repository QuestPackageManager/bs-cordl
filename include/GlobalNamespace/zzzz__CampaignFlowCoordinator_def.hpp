#pragma once
// IWYU pragma private; include "GlobalNamespace/CampaignFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CampaignFlowCoordinator)
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
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
class __CampaignFlowCoordinator____c__DisplayClass22_0;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass24_0;
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
class __CampaignFlowCoordinator____c__DisplayClass22_0;
}
namespace GlobalNamespace {
class __CampaignFlowCoordinator____c__DisplayClass24_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CampaignFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0);
MARK_REF_PTR_T(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0);
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CampaignFlowCoordinator::<>c__DisplayClass22_0*
class CORDL_TYPE __CampaignFlowCoordinator____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> __4__this;

  /// @brief Field viewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_viewController, put = __cordl_internal_set_viewController)) ::UnityW<::GlobalNamespace::MissionHelpViewController> viewController;

  static inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0* New_ctor();

  /// @brief Method <HandleMissionHelpViewControllerDidFinish>b__0, addr 0x3ae0ce8, size 0x54, virtual false, abstract: false, final false
  inline void _HandleMissionHelpViewControllerDidFinish_b__0();

  constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MissionHelpViewController> const& __cordl_internal_get_viewController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionHelpViewController>& __cordl_internal_get_viewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CampaignFlowCoordinator> value);

  constexpr void __cordl_internal_set_viewController(::UnityW<::GlobalNamespace::MissionHelpViewController> value);

  /// @brief Method .ctor, addr 0x3ae07bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CampaignFlowCoordinator____c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CampaignFlowCoordinator____c__DisplayClass22_0(__CampaignFlowCoordinator____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CampaignFlowCoordinator____c__DisplayClass22_0(__CampaignFlowCoordinator____c__DisplayClass22_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> _____4__this;

  /// @brief Field viewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionHelpViewController> ___viewController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0, ___viewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CampaignFlowCoordinator::<>c__DisplayClass24_0*
class CORDL_TYPE __CampaignFlowCoordinator____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> __4__this;

  /// @brief Field viewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_viewController, put = __cordl_internal_set_viewController)) ::UnityW<::GlobalNamespace::MissionResultsViewController> viewController;

  static inline ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0* New_ctor();

  /// @brief Method <HandleMissionResultsViewControllerRetryButtonPressed>b__0, addr 0x3ae0d3c, size 0x54, virtual false, abstract: false, final false
  inline void _HandleMissionResultsViewControllerRetryButtonPressed_b__0();

  constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController> const& __cordl_internal_get_viewController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController>& __cordl_internal_get_viewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CampaignFlowCoordinator> value);

  constexpr void __cordl_internal_set_viewController(::UnityW<::GlobalNamespace::MissionResultsViewController> value);

  /// @brief Method .ctor, addr 0x3ae0930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CampaignFlowCoordinator____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CampaignFlowCoordinator____c__DisplayClass24_0(__CampaignFlowCoordinator____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CampaignFlowCoordinator____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CampaignFlowCoordinator____c__DisplayClass24_0(__CampaignFlowCoordinator____c__DisplayClass24_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> _____4__this;

  /// @brief Field viewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionResultsViewController> ___viewController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0, ___viewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CampaignFlowCoordinator
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 297, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CampaignFlowCoordinator*
class CORDL_TYPE CampaignFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass22_0 = ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0;

  using __c__DisplayClass24_0 = ::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0;

  /// @brief Field _beatmapLevelsModel, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _campaignProgressModel, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__campaignProgressModel, put = __cordl_internal_set__campaignProgressModel)) ::UnityW<::GlobalNamespace::CampaignProgressModel> _campaignProgressModel;

  /// @brief Field _defaultLightsPreset, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightsPreset, put = __cordl_internal_set__defaultLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO> _defaultLightsPreset;

  /// @brief Field _environmentsListModel, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameplaySetupViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplaySetupViewController, put = __cordl_internal_set__gameplaySetupViewController)) ::UnityW<::GlobalNamespace::GameplaySetupViewController>
      _gameplaySetupViewController;

  /// @brief Field _menuLightsManager, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__menuLightsManager, put = __cordl_internal_set__menuLightsManager)) ::UnityW<::GlobalNamespace::MenuLightsManager> _menuLightsManager;

  /// @brief Field _menuTransitionsHelper, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _missionHelpViewController, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionHelpViewController, put = __cordl_internal_set__missionHelpViewController)) ::UnityW<::GlobalNamespace::MissionHelpViewController>
      _missionHelpViewController;

  /// @brief Field _missionResultsViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionResultsViewController, put = __cordl_internal_set__missionResultsViewController)) ::UnityW<::GlobalNamespace::MissionResultsViewController>
      _missionResultsViewController;

  /// @brief Field _missionSelectionNavigationController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionSelectionNavigationController,
                      put = __cordl_internal_set__missionSelectionNavigationController)) ::UnityW<::GlobalNamespace::MissionSelectionNavigationController>
      _missionSelectionNavigationController;

  /// @brief Field _newObjectiveLightsPreset, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__newObjectiveLightsPreset, put = __cordl_internal_set__newObjectiveLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _newObjectiveLightsPreset;

  /// @brief Field _playerDataModel, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _resultsClearedLightsPreset, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsClearedLightsPreset, put = __cordl_internal_set__resultsClearedLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsFailedLightsPreset, put = __cordl_internal_set__resultsFailedLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _resultsFailedLightsPreset;

  /// @brief Field _showCredits, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get__showCredits, put = __cordl_internal_set__showCredits)) bool _showCredits;

  /// @brief Field didFinishEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>* didFinishEvent;

  /// @brief Method BackButtonWasPressed, addr 0x3ae0b78, size 0xa0, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DidActivate, addr 0x3adff1c, size 0x248, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3ae0164, size 0x1a8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleMissionHelpViewControllerDidFinish, addr 0x3ae0704, size 0xb8, virtual false, abstract: false, final false
  inline void HandleMissionHelpViewControllerDidFinish(::GlobalNamespace::MissionHelpViewController* viewController);

  /// @brief Method HandleMissionLevelSceneDidFinish, addr 0x3ae0938, size 0xe4, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMissionLevelSceneRestarted, addr 0x3ae0b3c, size 0x3c, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneRestarted(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMissionResultsViewControllerContinueButtonPressed, addr 0x3ae07c4, size 0xb4, virtual false, abstract: false, final false
  inline void HandleMissionResultsViewControllerContinueButtonPressed(::GlobalNamespace::MissionResultsViewController* viewController);

  /// @brief Method HandleMissionResultsViewControllerRetryButtonPressed, addr 0x3ae0878, size 0xb8, virtual false, abstract: false, final false
  inline void HandleMissionResultsViewControllerRetryButtonPressed(::GlobalNamespace::MissionResultsViewController* viewController);

  /// @brief Method HandleMissionSelectionNavigationControllerDidPressPlayButton, addr 0x3ae0404, size 0x124, virtual false, abstract: false, final false
  inline void HandleMissionSelectionNavigationControllerDidPressPlayButton(::GlobalNamespace::MissionSelectionNavigationController* viewController);

  static inline ::GlobalNamespace::CampaignFlowCoordinator* New_ctor();

  /// @brief Method StartLevel, addr 0x3ae0528, size 0x1dc, virtual false, abstract: false, final false
  inline void StartLevel(::System::Action* beforeSceneSwitchCallback);

  /// @brief Method TopViewControllerWillChange, addr 0x3ae030c, size 0xf8, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method UpdatePlayerStatistics, addr 0x3ae0a1c, size 0x120, virtual false, abstract: false, final false
  inline void UpdatePlayerStatistics(::GlobalNamespace::MissionCompletionResults* missionCompletionResults, ::GlobalNamespace::MissionNode* missionNode);

  /// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__23_0, addr 0x3ae0c20, size 0x90, virtual false, abstract: false, final false
  inline void _HandleMissionResultsViewControllerContinueButtonPressed_b__23_0();

  /// @brief Method <HandleMissionResultsViewControllerContinueButtonPressed>b__23_1, addr 0x3ae0cb0, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMissionResultsViewControllerContinueButtonPressed_b__23_1(bool presented);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel> const& __cordl_internal_get__campaignProgressModel() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignProgressModel>& __cordl_internal_get__campaignProgressModel();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultLightsPreset();

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController> const& __cordl_internal_get__gameplaySetupViewController() const;

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController>& __cordl_internal_get__gameplaySetupViewController();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get__menuLightsManager() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get__menuLightsManager();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::MissionHelpViewController> const& __cordl_internal_get__missionHelpViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionHelpViewController>& __cordl_internal_get__missionHelpViewController();

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController> const& __cordl_internal_get__missionResultsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionResultsViewController>& __cordl_internal_get__missionResultsViewController();

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionNavigationController> const& __cordl_internal_get__missionSelectionNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::MissionSelectionNavigationController>& __cordl_internal_get__missionSelectionNavigationController();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__newObjectiveLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__newObjectiveLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsClearedLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsClearedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsFailedLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsFailedLightsPreset();

  constexpr bool const& __cordl_internal_get__showCredits() const;

  constexpr bool& __cordl_internal_get__showCredits();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__campaignProgressModel(::UnityW<::GlobalNamespace::CampaignProgressModel> value);

  constexpr void __cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameplaySetupViewController(::UnityW<::GlobalNamespace::GameplaySetupViewController> value);

  constexpr void __cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__missionHelpViewController(::UnityW<::GlobalNamespace::MissionHelpViewController> value);

  constexpr void __cordl_internal_set__missionResultsViewController(::UnityW<::GlobalNamespace::MissionResultsViewController> value);

  constexpr void __cordl_internal_set__missionSelectionNavigationController(::UnityW<::GlobalNamespace::MissionSelectionNavigationController> value);

  constexpr void __cordl_internal_set__newObjectiveLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__resultsClearedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__resultsFailedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__showCredits(bool value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>* value);

  /// @brief Method .ctor, addr 0x3ae0c18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3adfdb4, size 0xb4, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3adfe68, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CampaignFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CampaignFlowCoordinator(CampaignFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CampaignFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CampaignFlowCoordinator(CampaignFlowCoordinator const&) = delete;

  /// @brief Field _defaultLightsPreset, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____resultsFailedLightsPreset;

  /// @brief Field _newObjectiveLightsPreset, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____newObjectiveLightsPreset;

  /// @brief Field _menuTransitionsHelper, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _menuLightsManager, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsManager> ____menuLightsManager;

  /// @brief Field _missionSelectionNavigationController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionSelectionNavigationController> ____missionSelectionNavigationController;

  /// @brief Field _missionResultsViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionResultsViewController> ____missionResultsViewController;

  /// @brief Field _gameplaySetupViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplaySetupViewController> ____gameplaySetupViewController;

  /// @brief Field _missionHelpViewController, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionHelpViewController> ____missionHelpViewController;

  /// @brief Field _environmentsListModel, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _playerDataModel, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _campaignProgressModel, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignProgressModel> ____campaignProgressModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field didFinishEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::CampaignFlowCoordinator>>* ___didFinishEvent;

  /// @brief Field _showCredits, offset: 0x128, size: 0x1, def value: None
  bool ____showCredits;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5258 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CampaignFlowCoordinator, 0x130>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____defaultLightsPreset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____resultsClearedLightsPreset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____resultsFailedLightsPreset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____newObjectiveLightsPreset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____menuTransitionsHelper) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____menuLightsManager) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____missionSelectionNavigationController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____missionResultsViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____gameplaySetupViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____missionHelpViewController) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____environmentsListModel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____playerDataModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____campaignProgressModel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____beatmapLevelsModel) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ___didFinishEvent) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CampaignFlowCoordinator, ____showCredits) == 0x128, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CampaignFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignFlowCoordinator*, "", "CampaignFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass22_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass22_0");
NEED_NO_BOX(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CampaignFlowCoordinator____c__DisplayClass24_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass24_0");
