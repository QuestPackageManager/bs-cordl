#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningDisplayViewController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningDisplayViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningDisplayViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::HealthWarningDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22b4f20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningDisplayViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningDisplayViewController::*)()>(
    &::GlobalNamespace::HealthWarningDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b4f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyTextMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthAndSafetyTextMesh;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyTextMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthAndSafetyTextMesh;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__healthAndSafetyTextMesh(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthAndSafetyTextMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyFullLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthAndSafetyFullLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyFullLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthAndSafetyFullLocalizationKey;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__healthAndSafetyFullLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthAndSafetyFullLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyPSLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthAndSafetyPSLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::HealthWarningDisplayViewController::__get__healthAndSafetyPSLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____healthAndSafetyPSLocalizationKey;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__healthAndSafetyPSLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthAndSafetyPSLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::HealthWarningDisplayViewController::__get__showShortHealthAndSafety() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showShortHealthAndSafety;
}
constexpr bool const& GlobalNamespace::HealthWarningDisplayViewController::__get__showShortHealthAndSafety() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____showShortHealthAndSafety;
}
constexpr void GlobalNamespace::HealthWarningDisplayViewController::__set__showShortHealthAndSafety(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____showShortHealthAndSafety = value;
}
inline void GlobalNamespace::HealthWarningDisplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline ::GlobalNamespace::HealthWarningDisplayViewController* GlobalNamespace::HealthWarningDisplayViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningDisplayViewController*>());
}
inline void GlobalNamespace::HealthWarningDisplayViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningDisplayViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningDisplayViewController::HealthWarningDisplayViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
