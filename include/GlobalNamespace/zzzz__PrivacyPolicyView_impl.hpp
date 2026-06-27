#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyView_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView.Activate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)(::HMUI::ButtonBinder*, bool)>(&::GlobalNamespace::PrivacyPolicyView::Activate)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x57a73e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ButtonBinder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView.OpenLink
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)()>(&::GlobalNamespace::PrivacyPolicyView::OpenLink)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57b64f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        "OpenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)(bool)>(&::GlobalNamespace::PrivacyPolicyView::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57b6564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        "OnApplicationFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyView._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyView::*)()>(&::GlobalNamespace::PrivacyPolicyView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b65c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__openLinkButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openLinkButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__openLinkButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openLinkButton;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__openLinkButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____openLinkButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__privacyPolicyTextMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyTextMesh;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__privacyPolicyTextMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____privacyPolicyTextMesh;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__privacyPolicyTextMesh(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyTextMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__linkWasOpenedMessageTextMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkWasOpenedMessageTextMesh;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__linkWasOpenedMessageTextMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkWasOpenedMessageTextMesh;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__linkWasOpenedMessageTextMesh(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____linkWasOpenedMessageTextMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__localizedTextAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__localizedTextAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localizedTextAsset;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__koreanLocalizedTextAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____koreanLocalizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__koreanLocalizedTextAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____koreanLocalizedTextAsset;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__koreanLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____koreanLocalizedTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__popupMessageLocalizationKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popupMessageLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__popupMessageLocalizationKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popupMessageLocalizationKey;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__popupMessageLocalizationKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____popupMessageLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__settingsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::PrivacyPolicyView::__cordl_internal_get__settingsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsManager;
}
constexpr void GlobalNamespace::PrivacyPolicyView::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PrivacyPolicyView::Activate(::HMUI::ButtonBinder*  buttonBinder, bool  firstActivation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        "Activate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ButtonBinder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonBinder, firstActivation);
}
inline void GlobalNamespace::PrivacyPolicyView::OpenLink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        "OpenLink",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PrivacyPolicyView::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        "OnApplicationFocus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, focus);
}
inline void GlobalNamespace::PrivacyPolicyView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyView*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivacyPolicyView* GlobalNamespace::PrivacyPolicyView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivacyPolicyView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivacyPolicyView::PrivacyPolicyView()   {
}
