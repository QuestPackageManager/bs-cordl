#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::PrivacyPolicyViewController::DidActivate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x57351c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)(bool, bool)>(
    &::GlobalNamespace::PrivacyPolicyViewController::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57353fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyViewController::*)()>(&::GlobalNamespace::PrivacyPolicyViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5735408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____okButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__iAcceptButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iAcceptButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__iAcceptButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____iAcceptButton;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__iAcceptButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____iAcceptButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::TextPageScrollView>& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__textPageScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr ::UnityW<::HMUI::TextPageScrollView> const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__textPageScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textPageScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__privacyPolicyLocalizedTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyLocalizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__privacyPolicyLocalizedTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyLocalizedTextAsset;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__privacyPolicyLocalizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyLocalizedTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__updateNoticeLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateNoticeLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__updateNoticeLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updateNoticeLocalizationKey;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__updateNoticeLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updateNoticeLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__showUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showUpdate;
}
constexpr bool const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__showUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showUpdate;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__showUpdate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showUpdate = value;
}
constexpr bool& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__showIAcceptPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showIAcceptPrompt;
}
constexpr bool const& GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_get__showIAcceptPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showIAcceptPrompt;
}
constexpr void GlobalNamespace::PrivacyPolicyViewController::__cordl_internal_set__showIAcceptPrompt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showIAcceptPrompt = value;
}
inline void GlobalNamespace::PrivacyPolicyViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PrivacyPolicyViewController::Init(bool showUpdate, bool showIAcceptPrompt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showUpdate, showIAcceptPrompt);
}
inline void GlobalNamespace::PrivacyPolicyViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivacyPolicyViewController* GlobalNamespace::PrivacyPolicyViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivacyPolicyViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivacyPolicyViewController::PrivacyPolicyViewController() {}
