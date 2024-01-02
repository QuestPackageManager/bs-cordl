#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__BaseViewControllersInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseViewControllersInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseViewControllersInstaller::*)()>(
    &::GlobalNamespace::BaseViewControllersInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x226f00c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseViewControllersInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BaseViewControllersInstaller::*)()>(
    &::GlobalNamespace::BaseViewControllersInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SimpleDialogPromptViewController*& GlobalNamespace::BaseViewControllersInstaller::__get__simpleDialogPromptViewControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> const&
GlobalNamespace::BaseViewControllersInstaller::__get__simpleDialogPromptViewControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewControllerPrefab;
}
constexpr void GlobalNamespace::BaseViewControllersInstaller::__set__simpleDialogPromptViewControllerPrefab(::GlobalNamespace::SimpleDialogPromptViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleDialogPromptViewControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*& GlobalNamespace::BaseViewControllersInstaller::__get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewControllerPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*> const&
GlobalNamespace::BaseViewControllersInstaller::__get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewControllerPrefab;
}
constexpr void GlobalNamespace::BaseViewControllersInstaller::__set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____safeAreaFocusedSimpleDialogPromptViewControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BaseViewControllersInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseViewControllersInstaller* GlobalNamespace::BaseViewControllersInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BaseViewControllersInstaller*>());
}
inline void GlobalNamespace::BaseViewControllersInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseViewControllersInstaller::BaseViewControllersInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
