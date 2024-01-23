#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelpFlowCoordinator)
namespace GlobalNamespace {
class EulaDisplayViewController;
}
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
namespace GlobalNamespace {
class HelpMenuViewController;
}
namespace GlobalNamespace {
class HelpNavigationController;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
namespace GlobalNamespace {
class LicensesDisplayViewController;
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
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpFlowCoordinator);
// Type: ::HelpFlowCoordinator
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13582))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5499))
// CS Name: ::HelpFlowCoordinator*
class CORDL_TYPE HelpFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Field _helpMenuViewController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__helpMenuViewController,
                      put = __cordl_internal_set__helpMenuViewController))::UnityW<::GlobalNamespace::HelpMenuViewController> _helpMenuViewController;

  /// @brief Field _helpNavigationController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__helpNavigationController,
                      put = __cordl_internal_set__helpNavigationController))::UnityW<::GlobalNamespace::HelpNavigationController> _helpNavigationController;

  /// @brief Field _howToPlayViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__howToPlayViewController,
                      put = __cordl_internal_set__howToPlayViewController))::UnityW<::GlobalNamespace::HowToPlayViewController> _howToPlayViewController;

  /// @brief Field _healthWarningDisplayViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningDisplayViewController,
                      put = __cordl_internal_set__healthWarningDisplayViewController))::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> _healthWarningDisplayViewController;

  /// @brief Field _privacyPolicyDisplayViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyDisplayViewController,
                      put = __cordl_internal_set__privacyPolicyDisplayViewController))::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> _privacyPolicyDisplayViewController;

  /// @brief Field _eulaDisplayViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaDisplayViewController,
                      put = __cordl_internal_set__eulaDisplayViewController))::UnityW<::GlobalNamespace::EulaDisplayViewController> _eulaDisplayViewController;

  /// @brief Field _licensesDisplayViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__licensesDisplayViewController,
                      put = __cordl_internal_set__licensesDisplayViewController))::UnityW<::GlobalNamespace::LicensesDisplayViewController> _licensesDisplayViewController;

  /// @brief Field _playerStatisticsViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerStatisticsViewController,
                      put = __cordl_internal_set__playerStatisticsViewController))::UnityW<::GlobalNamespace::PlayerStatisticsViewController> _playerStatisticsViewController;

  /// @brief Field _playerDataModel, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _menuTransitionsHelper, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field didFinishEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* didFinishEvent;

  /// @brief Field _viewControllers, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllers,
                      put = __cordl_internal_set__viewControllers))::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* _viewControllers;

  constexpr ::UnityW<::GlobalNamespace::HelpMenuViewController>& __cordl_internal_get__helpMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::HelpMenuViewController> const& __cordl_internal_get__helpMenuViewController() const;

  constexpr void __cordl_internal_set__helpMenuViewController(::UnityW<::GlobalNamespace::HelpMenuViewController> value);

  constexpr ::UnityW<::GlobalNamespace::HelpNavigationController>& __cordl_internal_get__helpNavigationController();

  constexpr ::UnityW<::GlobalNamespace::HelpNavigationController> const& __cordl_internal_get__helpNavigationController() const;

  constexpr void __cordl_internal_set__helpNavigationController(::UnityW<::GlobalNamespace::HelpNavigationController> value);

  constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController>& __cordl_internal_get__howToPlayViewController();

  constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController> const& __cordl_internal_get__howToPlayViewController() const;

  constexpr void __cordl_internal_set__howToPlayViewController(::UnityW<::GlobalNamespace::HowToPlayViewController> value);

  constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController>& __cordl_internal_get__healthWarningDisplayViewController();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> const& __cordl_internal_get__healthWarningDisplayViewController() const;

  constexpr void __cordl_internal_set__healthWarningDisplayViewController(::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController>& __cordl_internal_get__privacyPolicyDisplayViewController();

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> const& __cordl_internal_get__privacyPolicyDisplayViewController() const;

  constexpr void __cordl_internal_set__privacyPolicyDisplayViewController(::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> value);

  constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController>& __cordl_internal_get__eulaDisplayViewController();

  constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController> const& __cordl_internal_get__eulaDisplayViewController() const;

  constexpr void __cordl_internal_set__eulaDisplayViewController(::UnityW<::GlobalNamespace::EulaDisplayViewController> value);

  constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController>& __cordl_internal_get__licensesDisplayViewController();

  constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController> const& __cordl_internal_get__licensesDisplayViewController() const;

  constexpr void __cordl_internal_set__licensesDisplayViewController(::UnityW<::GlobalNamespace::LicensesDisplayViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerStatisticsViewController>& __cordl_internal_get__playerStatisticsViewController();

  constexpr ::UnityW<::GlobalNamespace::PlayerStatisticsViewController> const& __cordl_internal_get__playerStatisticsViewController() const;

  constexpr void __cordl_internal_set__playerStatisticsViewController(::UnityW<::GlobalNamespace::PlayerStatisticsViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value);

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>*& __cordl_internal_get__viewControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>*> const&
  __cordl_internal_get__viewControllers() const;

  constexpr void __cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* value);

  /// @brief Method add_didFinishEvent, addr 0x2289ca8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value);

  /// @brief Method remove_didFinishEvent, addr 0x2289d58, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* value);

  /// @brief Method DidActivate, addr 0x2289e08, size 0x50c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x228a314, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleDidSelectHelpSubMenu, addr 0x228a420, size 0x64, virtual false, abstract: false, final false
  inline void HandleDidSelectHelpSubMenu(int32_t idx);

  /// @brief Method ReplaceViewController, addr 0x228a484, size 0x104, virtual false, abstract: false, final false
  inline void ReplaceViewController(::HMUI::ViewController* viewController);

  /// @brief Method HandleHowToPlayViewControllerDidFinish, addr 0x228a588, size 0x78, virtual false, abstract: false, final false
  inline void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions howToPlayOptions);

  /// @brief Method BackButtonWasPressed, addr 0x228a600, size 0x20, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  static inline ::GlobalNamespace::HelpFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x228a620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpFlowCoordinator(HelpFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpFlowCoordinator(HelpFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpFlowCoordinator();

public:
  /// @brief Field _helpMenuViewController, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HelpMenuViewController> ____helpMenuViewController;

  /// @brief Field _helpNavigationController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HelpNavigationController> ____helpNavigationController;

  /// @brief Field _howToPlayViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HowToPlayViewController> ____howToPlayViewController;

  /// @brief Field _healthWarningDisplayViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> ____healthWarningDisplayViewController;

  /// @brief Field _privacyPolicyDisplayViewController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> ____privacyPolicyDisplayViewController;

  /// @brief Field _eulaDisplayViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EulaDisplayViewController> ____eulaDisplayViewController;

  /// @brief Field _licensesDisplayViewController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LicensesDisplayViewController> ____licensesDisplayViewController;

  /// @brief Field _playerStatisticsViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerStatisticsViewController> ____playerStatisticsViewController;

  /// @brief Field _playerDataModel, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _menuTransitionsHelper, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field didFinishEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::HelpFlowCoordinator>>* ___didFinishEvent;

  /// @brief Field _viewControllers, offset: 0x100, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* ____viewControllers;

  /// @brief Field kHowToPlayMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kHowToPlayMenu{ u"LABEL_HOW_TO_PLAY" };

  /// @brief Field kPrivacyPolicyMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kPrivacyPolicyMenu{ u"PRIVACY_POLICY_MENU" };

  /// @brief Field kEulaMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kEulaMenu{ u"EULA_MENU" };

  /// @brief Field kLicensesMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kLicensesMenu{ u"SOFTWARE_LICENSES" };

  /// @brief Field kHealthWarningMenu offset 0xffffffff size 0x8
  static constexpr ::ConstString kHealthWarningMenu{ u"HEALTH_AND_SAFETY_MENU" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpFlowCoordinator, 0x108>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____helpMenuViewController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____helpNavigationController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____howToPlayViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____healthWarningDisplayViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____privacyPolicyDisplayViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____eulaDisplayViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____licensesDisplayViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____playerStatisticsViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____playerDataModel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____menuTransitionsHelper) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ___didFinishEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpFlowCoordinator, ____viewControllers) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpFlowCoordinator*, "", "HelpFlowCoordinator");
