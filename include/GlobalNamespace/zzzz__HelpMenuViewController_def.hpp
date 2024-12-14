#pragma once
// IWYU pragma private; include "GlobalNamespace/HelpMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HelpMenuViewController)
namespace GlobalNamespace {
class EulaDisplayViewController;
}
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
namespace GlobalNamespace {
class LicensesDisplayViewController;
}
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
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
class HelpMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HelpMenuViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: HelpMenuViewController
class CORDL_TYPE HelpMenuViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _eulaDisplayViewController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaDisplayViewController, put = __cordl_internal_set__eulaDisplayViewController)) ::UnityW<::GlobalNamespace::EulaDisplayViewController>
      _eulaDisplayViewController;

  /// @brief Field _healthWarningDisplayViewController, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningDisplayViewController,
                      put = __cordl_internal_set__healthWarningDisplayViewController)) ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController>
      _healthWarningDisplayViewController;

  /// @brief Field _helpMenuSegmentedControl, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__helpMenuSegmentedControl, put = __cordl_internal_set__helpMenuSegmentedControl)) ::UnityW<::HMUI::TextSegmentedControl> _helpMenuSegmentedControl;

  /// @brief Field _howToPlayViewController, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__howToPlayViewController, put = __cordl_internal_set__howToPlayViewController)) ::UnityW<::GlobalNamespace::HowToPlayViewController>
      _howToPlayViewController;

  /// @brief Field _licensesDisplayViewController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__licensesDisplayViewController, put = __cordl_internal_set__licensesDisplayViewController)) ::UnityW<::GlobalNamespace::LicensesDisplayViewController>
      _licensesDisplayViewController;

  /// @brief Field _privacyPolicyDisplayViewController, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyDisplayViewController,
                      put = __cordl_internal_set__privacyPolicyDisplayViewController)) ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController>
      _privacyPolicyDisplayViewController;

  /// @brief Field _viewControllers, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllers,
                      put = __cordl_internal_set__viewControllers)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* _viewControllers;

  /// @brief Field didSelectHelpSubMenuEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectHelpSubMenuEvent,
                      put = __cordl_internal_set_didSelectHelpSubMenuEvent)) ::System::Action_1<::UnityW<::HMUI::ViewController>>* didSelectHelpSubMenuEvent;

  /// @brief Method DidActivate, addr 0x3b57d24, size 0x5a4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleHelpMenuSegmentedControlDidSelectCell, addr 0x3b582c8, size 0x84, virtual false, abstract: false, final false
  inline void HandleHelpMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::HelpMenuViewController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController> const& __cordl_internal_get__eulaDisplayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EulaDisplayViewController>& __cordl_internal_get__eulaDisplayViewController();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> const& __cordl_internal_get__healthWarningDisplayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController>& __cordl_internal_get__healthWarningDisplayViewController();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__helpMenuSegmentedControl() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__helpMenuSegmentedControl();

  constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController> const& __cordl_internal_get__howToPlayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HowToPlayViewController>& __cordl_internal_get__howToPlayViewController();

  constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController> const& __cordl_internal_get__licensesDisplayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::LicensesDisplayViewController>& __cordl_internal_get__licensesDisplayViewController();

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> const& __cordl_internal_get__privacyPolicyDisplayViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController>& __cordl_internal_get__privacyPolicyDisplayViewController();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* const& __cordl_internal_get__viewControllers() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>*& __cordl_internal_get__viewControllers();

  constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>* const& __cordl_internal_get_didSelectHelpSubMenuEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get_didSelectHelpSubMenuEvent();

  constexpr void __cordl_internal_set__eulaDisplayViewController(::UnityW<::GlobalNamespace::EulaDisplayViewController> value);

  constexpr void __cordl_internal_set__healthWarningDisplayViewController(::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> value);

  constexpr void __cordl_internal_set__helpMenuSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr void __cordl_internal_set__howToPlayViewController(::UnityW<::GlobalNamespace::HowToPlayViewController> value);

  constexpr void __cordl_internal_set__licensesDisplayViewController(::UnityW<::GlobalNamespace::LicensesDisplayViewController> value);

  constexpr void __cordl_internal_set__privacyPolicyDisplayViewController(::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> value);

  constexpr void __cordl_internal_set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* value);

  constexpr void __cordl_internal_set_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value);

  /// @brief Method .ctor, addr 0x3b5834c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectHelpSubMenuEvent, addr 0x3b57bc4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value);

  /// @brief Method remove_didSelectHelpSubMenuEvent, addr 0x3b57c74, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectHelpSubMenuEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HelpMenuViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HelpMenuViewController(HelpMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HelpMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HelpMenuViewController(HelpMenuViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5326 };

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

  /// @brief Field _helpMenuSegmentedControl, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____helpMenuSegmentedControl;

  /// @brief Field _howToPlayViewController, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HowToPlayViewController> ____howToPlayViewController;

  /// @brief Field _healthWarningDisplayViewController, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningDisplayViewController> ____healthWarningDisplayViewController;

  /// @brief Field _privacyPolicyDisplayViewController, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivacyPolicyDisplayViewController> ____privacyPolicyDisplayViewController;

  /// @brief Field _eulaDisplayViewController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EulaDisplayViewController> ____eulaDisplayViewController;

  /// @brief Field _licensesDisplayViewController, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LicensesDisplayViewController> ____licensesDisplayViewController;

  /// @brief Field didSelectHelpSubMenuEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::ViewController>>* ___didSelectHelpSubMenuEvent;

  /// @brief Field _viewControllers, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::HMUI::ViewController>, ::StringW>>* ____viewControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____helpMenuSegmentedControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____howToPlayViewController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____healthWarningDisplayViewController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____privacyPolicyDisplayViewController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____eulaDisplayViewController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____licensesDisplayViewController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ___didSelectHelpSubMenuEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HelpMenuViewController, ____viewControllers) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HelpMenuViewController, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HelpMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpMenuViewController*, "", "HelpMenuViewController");
