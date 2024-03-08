#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo.get_viewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::SettingsSubMenuInfo::*)()>(
    &::GlobalNamespace::SettingsSubMenuInfo::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242c590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                                                               "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo.get_localizedMenuName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SettingsSubMenuInfo::*)()>(
    &::GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x242c598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                                                               "get_localizedMenuName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242c5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::SettingsSubMenuInfo::__cordl_internal_get__viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::SettingsSubMenuInfo::__cordl_internal_get__viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewController;
}
constexpr void GlobalNamespace::SettingsSubMenuInfo::__cordl_internal_set__viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::SettingsSubMenuInfo::__cordl_internal_get__menuName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuName;
}
constexpr ::StringW const& GlobalNamespace::SettingsSubMenuInfo::__cordl_internal_get__menuName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuName;
}
constexpr void GlobalNamespace::SettingsSubMenuInfo::__cordl_internal_set__menuName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::SettingsSubMenuInfo::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                                                             "get_viewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(),
                                                                             "get_localizedMenuName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsSubMenuInfo* GlobalNamespace::SettingsSubMenuInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SettingsSubMenuInfo*>());
}
inline void GlobalNamespace::SettingsSubMenuInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SettingsSubMenuInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsSubMenuInfo::SettingsSubMenuInfo() {}
