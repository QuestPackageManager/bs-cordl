#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivacyPolicyDisplayViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyDisplayViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyDisplayViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::PrivacyPolicyDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5735180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrivacyPolicyDisplayViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrivacyPolicyDisplayViewController::*)()>(
    &::GlobalNamespace::PrivacyPolicyDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57351c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextPageScrollView>& GlobalNamespace::PrivacyPolicyDisplayViewController::__cordl_internal_get__textPageScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr ::UnityW<::HMUI::TextPageScrollView> const& GlobalNamespace::PrivacyPolicyDisplayViewController::__cordl_internal_get__textPageScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr void GlobalNamespace::PrivacyPolicyDisplayViewController::__cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textPageScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::PrivacyPolicyDisplayViewController::__cordl_internal_get__localizedTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::PrivacyPolicyDisplayViewController::__cordl_internal_get__localizedTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedTextAsset;
}
constexpr void GlobalNamespace::PrivacyPolicyDisplayViewController::__cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizedTextAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PrivacyPolicyDisplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::PrivacyPolicyDisplayViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrivacyPolicyDisplayViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PrivacyPolicyDisplayViewController* GlobalNamespace::PrivacyPolicyDisplayViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PrivacyPolicyDisplayViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrivacyPolicyDisplayViewController::PrivacyPolicyDisplayViewController() {}
