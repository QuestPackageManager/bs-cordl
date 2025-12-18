#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfilesSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerProfilesSettingsViewController)
namespace BeatSaber::GameSettings {
class ControllerProfile;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesModel;
}
namespace BeatSaber::GameSettings {
class ControllersTransformSettings;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace BeatSaber::GameSettings {
class ControllerProfilesSettingsViewController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController);
// Dependencies HMUI.ViewController
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: BeatSaber.GameSettings.ControllerProfilesSettingsViewController
class CORDL_TYPE ControllerProfilesSettingsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _buttonsContainer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonsContainer, put = __cordl_internal_set__buttonsContainer)) ::UnityW<::UnityEngine::GameObject> _buttonsContainer;

  /// @brief Field _copyFromLeftButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__copyFromLeftButton, put = __cordl_internal_set__copyFromLeftButton)) ::UnityW<::UnityEngine::UI::Button> _copyFromLeftButton;

  /// @brief Field _copyFromProfileButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__copyFromProfileButton, put = __cordl_internal_set__copyFromProfileButton)) ::UnityW<::UnityEngine::UI::Button> _copyFromProfileButton;

  /// @brief Field _copyFromRightButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__copyFromRightButton, put = __cordl_internal_set__copyFromRightButton)) ::UnityW<::UnityEngine::UI::Button> _copyFromRightButton;

  /// @brief Field _handlingToggle, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__handlingToggle, put = __cordl_internal_set__handlingToggle)) ::UnityW<::UnityEngine::UI::Toggle> _handlingToggle;

  /// @brief Field _interactableCanvasGroups, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__interactableCanvasGroups,
                      put = __cordl_internal_set__interactableCanvasGroups)) ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>
      _interactableCanvasGroups;

  /// @brief Field _profileModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__profileModel, put = __cordl_internal_set__profileModel)) ::BeatSaber::GameSettings::ControllerProfilesModel* _profileModel;

  /// @brief Field _profilesDropdown, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__profilesDropdown, put = __cordl_internal_set__profilesDropdown)) ::UnityW<::HMUI::SimpleTextDropdown> _profilesDropdown;

  /// @brief Field _toggleBinder, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _transformSettingsViewControllers, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__transformSettingsViewControllers,
                      put = __cordl_internal_set__transformSettingsViewControllers)) ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>,
                                                                                              ::Array<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>>*>
      _transformSettingsViewControllers;

  /// @brief Field onRequestSelectProfileToCopyFrom, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_onRequestSelectProfileToCopyFrom, put = __cordl_internal_set_onRequestSelectProfileToCopyFrom)) ::System::Action_1<
      ::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>* onRequestSelectProfileToCopyFrom;

  /// @brief Method CopyFormLeftToRight, addr 0x31c463c, size 0x3c, virtual false, abstract: false, final false
  inline void CopyFormLeftToRight();

  /// @brief Method CopyFromRightToLeft, addr 0x31c4678, size 0x3c, virtual false, abstract: false, final false
  inline void CopyFromRightToLeft();

  /// @brief Method CopyProfileResponse, addr 0x31c3b44, size 0x10, virtual false, abstract: false, final false
  inline void CopyProfileResponse(bool wasCanceled, int32_t selectedDropdownIndex);

  /// @brief Method CopyValuesFromOtherProfile, addr 0x31c3b54, size 0xdc, virtual false, abstract: false, final false
  inline void CopyValuesFromOtherProfile(int32_t otherProfileIndex);

  /// @brief Method DidActivate, addr 0x31c3c30, size 0x3fc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x31c4580, size 0x48, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method GetControllerProfileDisplayName, addr 0x31c4924, size 0x84, virtual false, abstract: false, final false
  static inline ::StringW GetControllerProfileDisplayName(::BeatSaber::GameSettings::ControllerProfile* profile);

  /// @brief Method GetSelectedProfile, addr 0x31c45d0, size 0x14, virtual false, abstract: false, final false
  inline ::BeatSaber::GameSettings::ControllerProfile* GetSelectedProfile();

  /// @brief Method HandlingToggleChanged, addr 0x31c45e4, size 0x2c, virtual false, abstract: false, final false
  inline void HandlingToggleChanged(bool value);

  static inline ::BeatSaber::GameSettings::ControllerProfilesSettingsViewController* New_ctor();

  /// @brief Method ProfileSelected, addr 0x31c4610, size 0x2c, virtual false, abstract: false, final false
  inline void ProfileSelected(::HMUI::DropdownWithTableView* view, int32_t index);

  /// @brief Method RefreshView, addr 0x31c4480, size 0x100, virtual false, abstract: false, final false
  inline void RefreshView();

  /// @brief Method ShowCopyFromProfile, addr 0x31c46b4, size 0x270, virtual false, abstract: false, final false
  inline void ShowCopyFromProfile();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__buttonsContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__buttonsContainer();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__copyFromLeftButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__copyFromLeftButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__copyFromProfileButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__copyFromProfileButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__copyFromRightButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__copyFromRightButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__handlingToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__handlingToggle();

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get__interactableCanvasGroups() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*>& __cordl_internal_get__interactableCanvasGroups();

  constexpr ::BeatSaber::GameSettings::ControllerProfilesModel* const& __cordl_internal_get__profileModel() const;

  constexpr ::BeatSaber::GameSettings::ControllerProfilesModel*& __cordl_internal_get__profileModel();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__profilesDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__profilesDropdown();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>, ::Array<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>>*> const&
  __cordl_internal_get__transformSettingsViewControllers() const;

  constexpr ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>, ::Array<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>>*>&
  __cordl_internal_get__transformSettingsViewControllers();

  constexpr ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>* const&
  __cordl_internal_get_onRequestSelectProfileToCopyFrom() const;

  constexpr ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>*& __cordl_internal_get_onRequestSelectProfileToCopyFrom();

  constexpr void __cordl_internal_set__buttonsContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__copyFromLeftButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__copyFromProfileButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__copyFromRightButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__handlingToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__interactableCanvasGroups(::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> value);

  constexpr void __cordl_internal_set__profileModel(::BeatSaber::GameSettings::ControllerProfilesModel* value);

  constexpr void __cordl_internal_set__profilesDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set__transformSettingsViewControllers(
      ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>, ::Array<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>>*> value);

  constexpr void
  __cordl_internal_set_onRequestSelectProfileToCopyFrom(::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>* value);

  /// @brief Method .ctor, addr 0x31c4b44, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onRequestSelectProfileToCopyFrom, addr 0x31c39c4, size 0xc0, virtual false, abstract: false, final false
  inline void add_onRequestSelectProfileToCopyFrom(::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>* value);

  /// @brief Method remove_onRequestSelectProfileToCopyFrom, addr 0x31c3a84, size 0xc0, virtual false, abstract: false, final false
  inline void remove_onRequestSelectProfileToCopyFrom(::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerProfilesSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerProfilesSettingsViewController(ControllerProfilesSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerProfilesSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerProfilesSettingsViewController(ControllerProfilesSettingsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21883 };

  /// @brief Field _profilesDropdown, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____profilesDropdown;

  /// @brief Field _handlingToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____handlingToggle;

  /// @brief Field _interactableCanvasGroups, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::CanvasGroup>, ::Array<::UnityW<::UnityEngine::CanvasGroup>>*> ____interactableCanvasGroups;

  /// @brief Field _transformSettingsViewControllers, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>, ::Array<::UnityW<::BeatSaber::GameSettings::ControllersTransformSettings>>*> ____transformSettingsViewControllers;

  /// @brief Field _buttonsContainer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____buttonsContainer;

  /// @brief Field _copyFromLeftButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____copyFromLeftButton;

  /// @brief Field _copyFromRightButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____copyFromRightButton;

  /// @brief Field _copyFromProfileButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____copyFromProfileButton;

  /// @brief Field _profileModel, offset: 0xb8, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfilesModel* ____profileModel;

  /// @brief Field _toggleBinder, offset: 0xc0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field onRequestSelectProfileToCopyFrom, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::ArrayW<::System::ValueTuple_2<::StringW, int32_t>, ::Array<::System::ValueTuple_2<::StringW, int32_t>>*>>* ___onRequestSelectProfileToCopyFrom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____profilesDropdown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____handlingToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____interactableCanvasGroups) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____transformSettingsViewControllers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____buttonsContainer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____copyFromLeftButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____copyFromRightButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____copyFromProfileButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____profileModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ____toggleBinder) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, ___onRequestSelectProfileToCopyFrom) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController, 0xd0>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::ControllerProfilesSettingsViewController*, "BeatSaber.GameSettings", "ControllerProfilesSettingsViewController");
