#pragma once
// IWYU pragma private; include "GlobalNamespace\PrivacyPolicyView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyView_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)(::HMUI::ButtonBinder*, bool)>(&::GlobalNamespace::PrivacyPolicyView::Activate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5a1d230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { "Activate", {}, { ::i2c::type_of<::HMUI::ButtonBinder*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView.OpenLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)()>(&::GlobalNamespace::PrivacyPolicyView::OpenLink)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a25144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { "OpenLink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)(bool)>(&::GlobalNamespace::PrivacyPolicyView::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a251b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)()>(&::GlobalNamespace::PrivacyPolicyView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a25210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__openLinkButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openLinkButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__openLinkButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openLinkButton;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__openLinkButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____openLinkButton = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__privacyPolicyTextMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyTextMesh;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__privacyPolicyTextMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyTextMesh;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__privacyPolicyTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____privacyPolicyTextMesh = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__linkWasOpenedMessageTextMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkWasOpenedMessageTextMesh;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__linkWasOpenedMessageTextMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkWasOpenedMessageTextMesh;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__linkWasOpenedMessageTextMesh(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____linkWasOpenedMessageTextMesh = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__localizedTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__localizedTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedTextAsset;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedTextAsset = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__koreanLocalizedTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____koreanLocalizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__koreanLocalizedTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____koreanLocalizedTextAsset;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__koreanLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____koreanLocalizedTextAsset = value;
}
constexpr ::StringW& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__popupMessageLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popupMessageLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__popupMessageLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____popupMessageLocalizationKey;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__popupMessageLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____popupMessageLocalizationKey = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::PrivacyPolicyView::Activate(::HMUI::ButtonBinder* buttonBinder, bool firstActivation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { "Activate", {}, { ::i2c::type_of<::HMUI::ButtonBinder*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonBinder, firstActivation);
}
inline void GlobalNamespace::PrivacyPolicyView::OpenLink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { "OpenLink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PrivacyPolicyView::OnApplicationFocus(bool focus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void GlobalNamespace::PrivacyPolicyView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrivacyPolicyView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivacyPolicyView* GlobalNamespace::PrivacyPolicyView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PrivacyPolicyView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivacyPolicyView::PrivacyPolicyView() {}
