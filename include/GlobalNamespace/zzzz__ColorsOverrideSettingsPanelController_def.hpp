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
// CS Name: ::ColorsOverrideSettingsPanelController*
class CORDL_TYPE ColorsOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _analyticsModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _buttonBinder, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _colorSchemeDropDown, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeDropDown, put = __cordl_internal_set__colorSchemeDropDown))::UnityW<::GlobalNamespace::ColorSchemeDropdown> _colorSchemeDropDown;

  /// @brief Field _colorSchemesSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesSettings, put = __cordl_internal_set__colorSchemesSettings))::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings;

  /// @brief Field _detailsPanelGO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__detailsPanelGO, put = __cordl_internal_set__detailsPanelGO))::UnityW<::UnityEngine::GameObject> _detailsPanelGO;

  /// @brief Field _dismissPanelAnimation, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissPanelAnimation, put = __cordl_internal_set__dismissPanelAnimation))::UnityW<::HMUI::PanelAnimationSO> _dismissPanelAnimation;

  /// @brief Field _editColorSchemeButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__editColorSchemeButton, put = __cordl_internal_set__editColorSchemeButton))::UnityW<::UnityEngine::UI::Button> _editColorSchemeButton;

  /// @brief Field _editColorSchemeController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__editColorSchemeController,
                      put = __cordl_internal_set__editColorSchemeController))::UnityW<::GlobalNamespace::EditColorSchemeController> _editColorSchemeController;

  /// @brief Field _editColorSchemeModalView, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__editColorSchemeModalView, put = __cordl_internal_set__editColorSchemeModalView))::UnityW<::HMUI::ModalView> _editColorSchemeModalView;

  /// @brief Field _initialized, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _isDirty, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirty, put = __cordl_internal_set__isDirty)) bool _isDirty;

  /// @brief Field _overrideColorsToggle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideColorsToggle, put = __cordl_internal_set__overrideColorsToggle))::UnityW<::UnityEngine::UI::Toggle> _overrideColorsToggle;

  /// @brief Field _presentPanelAnimation, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__presentPanelAnimation, put = __cordl_internal_set__presentPanelAnimation))::UnityW<::HMUI::PanelAnimationSO> _presentPanelAnimation;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  /// @brief Method HandleDropDownDidSelectCellWithIdx, addr 0x262e1b8, size 0x18c, virtual false, abstract: false, final false
  inline void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int32_t idx);

  /// @brief Method HandleEditColorSchemeButtonWasPressed, addr 0x262e570, size 0x7c, virtual false, abstract: false, final false
  inline void HandleEditColorSchemeButtonWasPressed();

  /// @brief Method HandleEditColorSchemeControllerDidChangeColorScheme, addr 0x262e654, size 0x2c, virtual false, abstract: false, final false
  inline void HandleEditColorSchemeControllerDidChangeColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method HandleEditColorSchemeControllerDidFinish, addr 0x262e604, size 0x50, virtual false, abstract: false, final false
  inline void HandleEditColorSchemeControllerDidFinish();

  /// @brief Method HandleOverrideColorsToggleValueChanged, addr 0x262e344, size 0x22c, virtual false, abstract: false, final false
  inline void HandleOverrideColorsToggleValueChanged(bool isOn);

  static inline ::GlobalNamespace::ColorsOverrideSettingsPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x262dc24, size 0x23c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x262dfac, size 0x24, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x262dfd0, size 0x10, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x262dfe0, size 0x1d8, virtual true, abstract: false, final true
  inline void Refresh();

  /// @brief Method SetData, addr 0x262d870, size 0x268, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings);

  /// @brief Method <HandleOverrideColorsToggleValueChanged>b__19_0, addr 0x262e688, size 0x20, virtual false, abstract: false, final false
  inline void _HandleOverrideColorsToggleValueChanged_b__19_0();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeDropdown> const& __cordl_internal_get__colorSchemeDropDown() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeDropdown>& __cordl_internal_get__colorSchemeDropDown();

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __cordl_internal_get__colorSchemesSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> const& __cordl_internal_get__colorSchemesSettings() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__detailsPanelGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__detailsPanelGO();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__dismissPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__dismissPanelAnimation();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__editColorSchemeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__editColorSchemeButton();

  constexpr ::UnityW<::GlobalNamespace::EditColorSchemeController> const& __cordl_internal_get__editColorSchemeController() const;

  constexpr ::UnityW<::GlobalNamespace::EditColorSchemeController>& __cordl_internal_get__editColorSchemeController();

  constexpr ::UnityW<::HMUI::ModalView> const& __cordl_internal_get__editColorSchemeModalView() const;

  constexpr ::UnityW<::HMUI::ModalView>& __cordl_internal_get__editColorSchemeModalView();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr bool const& __cordl_internal_get__isDirty() const;

  constexpr bool& __cordl_internal_get__isDirty();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__overrideColorsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__overrideColorsToggle();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__presentPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__presentPanelAnimation();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__colorSchemeDropDown(::UnityW<::GlobalNamespace::ColorSchemeDropdown> value);

  constexpr void __cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr void __cordl_internal_set__detailsPanelGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__dismissPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  constexpr void __cordl_internal_set__editColorSchemeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__editColorSchemeController(::UnityW<::GlobalNamespace::EditColorSchemeController> value);

  constexpr void __cordl_internal_set__editColorSchemeModalView(::UnityW<::HMUI::ModalView> value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__isDirty(bool value);

  constexpr void __cordl_internal_set__overrideColorsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__presentPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  /// @brief Method .ctor, addr 0x262e680, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IRefreshable"
  constexpr ::GlobalNamespace::IRefreshable* i___GlobalNamespace__IRefreshable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorsOverrideSettingsPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorsOverrideSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorsOverrideSettingsPanelController(ColorsOverrideSettingsPanelController const&) = delete;

  /// @brief Field _overrideColorsToggle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____overrideColorsToggle;

  /// @brief Field _detailsPanelGO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____detailsPanelGO;

  /// @brief Field _colorSchemeDropDown, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeDropdown> ____colorSchemeDropDown;

  /// @brief Field _editColorSchemeController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EditColorSchemeController> ____editColorSchemeController;

  /// @brief Field _editColorSchemeModalView, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::ModalView> ____editColorSchemeModalView;

  /// @brief Field _editColorSchemeButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____editColorSchemeButton;

  /// @brief Field _presentPanelAnimation, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____dismissPanelAnimation;

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
