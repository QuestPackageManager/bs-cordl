#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorsOverrideSettingsPanelController)
namespace GlobalNamespace {
class ColorSchemeDropdown;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class EditColorSchemeController;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class ModalView;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorsOverrideSettingsPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorsOverrideSettingsPanelController);
// Type: ::ColorsOverrideSettingsPanelController
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5412))
// CS Name: ::ColorsOverrideSettingsPanelController*
class CORDL_TYPE ColorsOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _overrideColorsToggle, offset 0x18, size 0x8
  __declspec(property(get = __get__overrideColorsToggle, put = __set__overrideColorsToggle))::UnityEngine::UI::Toggle* _overrideColorsToggle;

  /// @brief Field _detailsPanelGO, offset 0x20, size 0x8
  __declspec(property(get = __get__detailsPanelGO, put = __set__detailsPanelGO))::UnityEngine::GameObject* _detailsPanelGO;

  /// @brief Field _colorSchemeDropDown, offset 0x28, size 0x8
  __declspec(property(get = __get__colorSchemeDropDown, put = __set__colorSchemeDropDown))::GlobalNamespace::ColorSchemeDropdown* _colorSchemeDropDown;

  /// @brief Field _editColorSchemeController, offset 0x30, size 0x8
  __declspec(property(get = __get__editColorSchemeController, put = __set__editColorSchemeController))::GlobalNamespace::EditColorSchemeController* _editColorSchemeController;

  /// @brief Field _editColorSchemeModalView, offset 0x38, size 0x8
  __declspec(property(get = __get__editColorSchemeModalView, put = __set__editColorSchemeModalView))::HMUI::ModalView* _editColorSchemeModalView;

  /// @brief Field _editColorSchemeButton, offset 0x40, size 0x8
  __declspec(property(get = __get__editColorSchemeButton, put = __set__editColorSchemeButton))::UnityEngine::UI::Button* _editColorSchemeButton;

  /// @brief Field _presentPanelAnimation, offset 0x48, size 0x8
  __declspec(property(get = __get__presentPanelAnimation, put = __set__presentPanelAnimation))::HMUI::PanelAnimationSO* _presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset 0x50, size 0x8
  __declspec(property(get = __get__dismissPanelAnimation, put = __set__dismissPanelAnimation))::HMUI::PanelAnimationSO* _dismissPanelAnimation;

  /// @brief Field _analyticsModel, offset 0x58, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _colorSchemesSettings, offset 0x60, size 0x8
  __declspec(property(get = __get__colorSchemesSettings, put = __set__colorSchemesSettings))::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings;

  /// @brief Field _initialized, offset 0x68, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  /// @brief Field _isDirty, offset 0x69, size 0x1
  __declspec(property(get = __get__isDirty, put = __set__isDirty)) bool _isDirty;

  /// @brief Field _buttonBinder, offset 0x70, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IRefreshable"
  constexpr ::GlobalNamespace::IRefreshable* i___GlobalNamespace__IRefreshable() noexcept;

  constexpr ::UnityEngine::UI::Toggle*& __get__overrideColorsToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__overrideColorsToggle() const;

  constexpr void __set__overrideColorsToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::GameObject*& __get__detailsPanelGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__detailsPanelGO() const;

  constexpr void __set__detailsPanelGO(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::ColorSchemeDropdown*& __get__colorSchemeDropDown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeDropdown*> const& __get__colorSchemeDropDown() const;

  constexpr void __set__colorSchemeDropDown(::GlobalNamespace::ColorSchemeDropdown* value);

  constexpr ::GlobalNamespace::EditColorSchemeController*& __get__editColorSchemeController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditColorSchemeController*> const& __get__editColorSchemeController() const;

  constexpr void __set__editColorSchemeController(::GlobalNamespace::EditColorSchemeController* value);

  constexpr ::HMUI::ModalView*& __get__editColorSchemeModalView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ModalView*> const& __get__editColorSchemeModalView() const;

  constexpr void __set__editColorSchemeModalView(::HMUI::ModalView* value);

  constexpr ::UnityEngine::UI::Button*& __get__editColorSchemeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__editColorSchemeButton() const;

  constexpr void __set__editColorSchemeButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::PanelAnimationSO*& __get__presentPanelAnimation();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> const& __get__presentPanelAnimation() const;

  constexpr void __set__presentPanelAnimation(::HMUI::PanelAnimationSO* value);

  constexpr ::HMUI::PanelAnimationSO*& __get__dismissPanelAnimation();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::PanelAnimationSO*> const& __get__dismissPanelAnimation() const;

  constexpr void __set__dismissPanelAnimation(::HMUI::PanelAnimationSO* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __get__colorSchemesSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> const& __get__colorSchemesSettings() const;

  constexpr void __set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  constexpr bool& __get__isDirty();

  constexpr bool const& __get__isDirty() const;

  constexpr void __set__isDirty(bool value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method SetData, addr 0x2275e84, size 0x268, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings);

  /// @brief Method OnDestroy, addr 0x2276238, size 0x23c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x22765c0, size 0x24, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x22765e4, size 0x10, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x22765f4, size 0x1d8, virtual true, abstract: false, final true
  inline void Refresh();

  /// @brief Method HandleDropDownDidSelectCellWithIdx, addr 0x22767cc, size 0x18c, virtual false, abstract: false, final false
  inline void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int32_t idx);

  /// @brief Method HandleOverrideColorsToggleValueChanged, addr 0x2276958, size 0x22c, virtual false, abstract: false, final false
  inline void HandleOverrideColorsToggleValueChanged(bool isOn);

  /// @brief Method HandleEditColorSchemeButtonWasPressed, addr 0x2276b84, size 0x7c, virtual false, abstract: false, final false
  inline void HandleEditColorSchemeButtonWasPressed();

  /// @brief Method HandleEditColorSchemeControllerDidFinish, addr 0x2276c18, size 0x50, virtual false, abstract: false, final false
  inline void HandleEditColorSchemeControllerDidFinish();

  /// @brief Method HandleEditColorSchemeControllerDidChangeColorScheme, addr 0x2276c68, size 0x2c, virtual false, abstract: false, final false
  inline void HandleEditColorSchemeControllerDidChangeColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  static inline ::GlobalNamespace::ColorsOverrideSettingsPanelController* New_ctor();

  /// @brief Method .ctor, addr 0x2276c94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleOverrideColorsToggleValueChanged>b__19_0, addr 0x2276c9c, size 0x20, virtual false, abstract: false, final false
  inline void _HandleOverrideColorsToggleValueChanged_b__19_0();

  // Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorsOverrideSettingsPanelController();

public:
  /// @brief Field _overrideColorsToggle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____overrideColorsToggle;

  /// @brief Field _detailsPanelGO, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____detailsPanelGO;

  /// @brief Field _colorSchemeDropDown, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeDropdown* ____colorSchemeDropDown;

  /// @brief Field _editColorSchemeController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EditColorSchemeController* ____editColorSchemeController;

  /// @brief Field _editColorSchemeModalView, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ModalView* ____editColorSchemeModalView;

  /// @brief Field _editColorSchemeButton, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____editColorSchemeButton;

  /// @brief Field _presentPanelAnimation, offset: 0x48, size: 0x8, def value: None
  ::HMUI::PanelAnimationSO* ____presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset: 0x50, size: 0x8, def value: None
  ::HMUI::PanelAnimationSO* ____dismissPanelAnimation;

  /// @brief Field _analyticsModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _colorSchemesSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemesSettings* ____colorSchemesSettings;

  /// @brief Field _initialized, offset: 0x68, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _isDirty, offset: 0x69, size: 0x1, def value: None
  bool ____isDirty;

  /// @brief Field _buttonBinder, offset: 0x70, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorsOverrideSettingsPanelController, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____overrideColorsToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____detailsPanelGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____colorSchemeDropDown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____editColorSchemeController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____editColorSchemeModalView) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____editColorSchemeButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____presentPanelAnimation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____dismissPanelAnimation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____analyticsModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____colorSchemesSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____initialized) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____isDirty) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorsOverrideSettingsPanelController, ____buttonBinder) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorsOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorsOverrideSettingsPanelController*, "", "ColorsOverrideSettingsPanelController");
