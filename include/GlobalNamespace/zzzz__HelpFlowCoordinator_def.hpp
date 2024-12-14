#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HelpFlowCoordinator)
namespace GlobalNamespace {
class HelpMenuViewController;
}
namespace GlobalNamespace {
class HelpNavigationController;
}
namespace GlobalNamespace {
struct HowToPlayViewController_HowToPlayOptions;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpFlowCoordinator);
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: HelpFlowCoordinator
class CORDL_TYPE HelpFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Field _helpMenuViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__helpMenuViewController, put = __cordl_internal_set__helpMenuViewController)) ::UnityW<::GlobalNamespace::HelpMenuViewController>
      _helpMenuViewController;

  /// @brief Field _helpNavigationController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__helpNavigationController, put = __cordl_internal_set__helpNavigationController)) ::UnityW<::GlobalNamespace::HelpNavigationController>
      _helpNavigationController;

  /// @brief Field _howToPlayViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__howToPlayViewController, put = __cordl_internal_set__howToPlayViewController)) ::UnityW<::GlobalNamespace::HowToPlayViewController>
      _howToPlayViewController;

  /// @brief Field _menuTransitionsHelper, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _playerDataModel, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerStatisticsViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerStatisticsViewController,
                      put = __cordl_internal_set__playerStatisticsViewController)) ::UnityW<::GlobalNamespace::PlayerStatisticsViewController>
      _playerStatisticsViewController;

  /// @brief Field didFinishEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* didFinishEvent;

  /// @brief Method BackButtonWasPressed, addr 0x3c04158, size 0x20, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DidActivate, addr 0x3c03d44, size 0x20c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c03f50, size 0x104, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleDidSelectHelpSubMenu, addr 0x3c04054, size 0x4, virtual false, abstract: false, final false
  inline void HandleDidSelectHelpSubMenu(::HMUI::ViewController* viewController);

  /// @brief Method HandleHowToPlayViewControllerDidFinish, addr 0x3c04178, size 0x78, virtual false, abstract: false, final false
  inline void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::HowToPlayViewController_HowToPlayOptions howToPlayOptions);

  static inline ::GlobalNamespace::HelpFlowCoordinator* New_ctor();

  /// @brief Method ReplaceViewController, addr 0x3c04058, size 0x100, virtual false, abstract: false, final false
  inline void ReplaceViewController(::HMUI::ViewController* viewController);

  constexpr ::UnityW<::GlobalNamespace::HelpMenuViewController> const& __cordl_internal_get__helpMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HelpMenuViewController>& __cordl_internal_get__helpMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::HelpNavigationController> const& __cordl_internal_get__helpNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::HelpNavigationController>& __cordl_internal_get__helpNavigationController();

  constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController> const& __cordl_internal_get__howToPlayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController>& __cordl_internal_get__howToPlayViewController();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerStatisticsViewController> const& __cordl_internal_get__playerStatisticsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerStatisticsViewController>& __cordl_internal_get__playerStatisticsViewController();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__helpMenuViewController(::UnityW<::GlobalNamespace::HelpMenuViewController> value);

  constexpr void __cordl_internal_set__helpNavigationController(::UnityW<::GlobalNamespace::HelpNavigationController> value);

  constexpr void __cordl_internal_set__howToPlayViewController(::UnityW<::GlobalNamespace::HowToPlayViewController> value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerStatisticsViewController(::UnityW<::GlobalNamespace::PlayerStatisticsViewController> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value);

  /// @brief Method .ctor, addr 0x3c041f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3c03be4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3c03c94, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpFlowCoordinator(HelpFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpFlowCoordinator(HelpFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4796 };

  /// @brief Field kEulaMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kEulaMenu{ u"EULA_MENU" };

  /// @brief Field kHealthWarningMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kHealthWarningMenu{ u"HEALTH_AND_SAFETY_MENU" };

  /// @brief Field kHowToPlayMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kHowToPlayMenu{ u"LABEL_HOW_TO_PLAY" };

  /// @brief Field kLicensesMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kLicensesMenu{ u"SOFTWARE_LICENSES" };

  /// @brief Field kPrivacyPolicyMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrivacyPolicyMenu{ u"PRIVACY_POLICY_MENU" };

  /// @brief Field _helpMenuViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HelpMenuViewController> ____helpMenuViewController;

  /// @brief Field _menuTransitionsHelper, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _howToPlayViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HowToPlayViewController> ____howToPlayViewController;

  /// @brief Field _helpNavigationController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HelpNavigationController> ____helpNavigationController;

  /// @brief Field _playerStatisticsViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerStatisticsViewController> ____playerStatisticsViewController;

  /// @brief Field _playerDataModel, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didFinishEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____helpMenuViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____menuTransitionsHelper) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____howToPlayViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____helpNavigationController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____playerStatisticsViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____playerDataModel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ___didFinishEvent) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpFlowCoordinator, 0xe8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpFlowCoordinator*, "", "HelpFlowCoordinator");
