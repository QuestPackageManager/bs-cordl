#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorsOverrideSettingsPanelController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorsOverrideSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeDropdown_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__EditColorSchemeController_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__ModalView_def.hpp"
#include "HMUI/zzzz__PanelAnimationSO_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.get_editColorSchemeModalView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ModalView> (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::get_editColorSchemeModalView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5920bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "get_editColorSchemeModalView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::GlobalNamespace::ColorSchemesSettings*)>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5920be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                                                           { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&::GlobalNamespace::ColorsOverrideSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x592115c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&::GlobalNamespace::ColorsOverrideSettingsPanelController::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5921600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&::GlobalNamespace::ColorsOverrideSettingsPanelController::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5921624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&::GlobalNamespace::ColorsOverrideSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5921634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HideDropdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HideDropdown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5921838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HideDropdown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HandleDropDownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5921884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                             { "HandleDropDownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HandleOverrideColorsToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HandleOverrideColorsToggleValueChanged)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5921a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HandleOverrideColorsToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HandleColorOverrideTypeDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HandleColorOverrideTypeDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5921d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                { "HandleColorOverrideTypeDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HandleEditColorSchemeButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeButtonWasPressed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5921d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HandleEditColorSchemeButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HandleEditColorSchemeControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidFinish)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5921de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HandleEditColorSchemeControllerDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController.HandleEditColorSchemeControllerDidChangeColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidChangeColorScheme)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5921e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                             { "HandleEditColorSchemeControllerDidChangeColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(&::GlobalNamespace::ColorsOverrideSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5921e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorsOverrideSettingsPanelController._HandleOverrideColorsToggleValueChanged_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorsOverrideSettingsPanelController::*)()>(
    &::GlobalNamespace::ColorsOverrideSettingsPanelController::_HandleOverrideColorsToggleValueChanged_b__25_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5921e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "<HandleOverrideColorsToggleValueChanged>b__25_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__overrideColorsToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideColorsToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__overrideColorsToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideColorsToggle;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__overrideColorsToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideColorsToggle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__detailsPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailsPanelGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__detailsPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailsPanelGO;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__detailsPanelGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailsPanelGO = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeDropdown>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__colorSchemeDropDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeDropDown;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeDropdown> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__colorSchemeDropDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeDropDown;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__colorSchemeDropDown(::UnityW<::GlobalNamespace::ColorSchemeDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemeDropDown = value;
}
constexpr ::UnityW<::GlobalNamespace::EditColorSchemeController>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__editColorSchemeController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorSchemeController;
}
constexpr ::UnityW<::GlobalNamespace::EditColorSchemeController> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__editColorSchemeController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorSchemeController;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__editColorSchemeController(::UnityW<::GlobalNamespace::EditColorSchemeController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editColorSchemeController = value;
}
constexpr ::UnityW<::HMUI::ModalView>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__editColorSchemeModalView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorSchemeModalView;
}
constexpr ::UnityW<::HMUI::ModalView> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__editColorSchemeModalView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorSchemeModalView;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__editColorSchemeModalView(::UnityW<::HMUI::ModalView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editColorSchemeModalView = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__editColorSchemeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorSchemeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__editColorSchemeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editColorSchemeButton;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__editColorSchemeButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editColorSchemeButton = value;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__colorOverrideTypeDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverrideTypeDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__colorOverrideTypeDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverrideTypeDropdown;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__colorOverrideTypeDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorOverrideTypeDropdown = value;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__presentPanelAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presentPanelAnimation;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__presentPanelAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presentPanelAnimation;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__presentPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presentPanelAnimation = value;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO>& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__dismissPanelAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissPanelAnimation;
}
constexpr ::UnityW<::HMUI::PanelAnimationSO> const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__dismissPanelAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dismissPanelAnimation;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__dismissPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dismissPanelAnimation = value;
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr ::GlobalNamespace::IAnalyticsModel* const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____analyticsModel = value;
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr ::GlobalNamespace::ColorSchemesSettings* const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemesSettings = value;
}
constexpr bool& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr bool& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__isDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirty;
}
constexpr bool const& GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_get__isDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirty;
}
constexpr void GlobalNamespace::ColorsOverrideSettingsPanelController::__cordl_internal_set__isDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDirty = value;
}
inline ::UnityW<::HMUI::ModalView> GlobalNamespace::ColorsOverrideSettingsPanelController::get_editColorSchemeModalView() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "get_editColorSchemeModalView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ModalView>>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::SetData(::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                                                         { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSchemesSettings);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HideDropdown(bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HideDropdown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                           { "HandleDropDownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropDownWithTableView, idx);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HandleOverrideColorsToggleValueChanged(bool isOn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HandleOverrideColorsToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HandleColorOverrideTypeDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* _, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                              { "HandleColorOverrideTypeDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, idx);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HandleEditColorSchemeButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "HandleEditColorSchemeControllerDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::HandleEditColorSchemeControllerDidChangeColorScheme(::GlobalNamespace::ColorScheme* colorScheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(),
                                                           { "HandleEditColorSchemeControllerDidChangeColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorScheme);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorsOverrideSettingsPanelController::_HandleOverrideColorsToggleValueChanged_b__25_0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorsOverrideSettingsPanelController*>(), { "<HandleOverrideColorsToggleValueChanged>b__25_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorsOverrideSettingsPanelController* GlobalNamespace::ColorsOverrideSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorsOverrideSettingsPanelController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr GlobalNamespace::ColorsOverrideSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRefreshable"
constexpr ::GlobalNamespace::IRefreshable* GlobalNamespace::ColorsOverrideSettingsPanelController::i___GlobalNamespace__IRefreshable() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorsOverrideSettingsPanelController::ColorsOverrideSettingsPanelController() {}
