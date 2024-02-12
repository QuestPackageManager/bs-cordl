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
  constexpr static std::size_t addrs = 0x23cace4;

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
  constexpr static std::size_t addrs = 0x23cad90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& GlobalNamespace::BaseViewControllersInstaller::__cordl_internal_get__simpleDialogPromptViewControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& GlobalNamespace::BaseViewControllersInstaller::__cordl_internal_get__simpleDialogPromptViewControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleDialogPromptViewControllerPrefab;
}
constexpr void GlobalNamespace::BaseViewControllersInstaller::__cordl_internal_set__simpleDialogPromptViewControllerPrefab(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleDialogPromptViewControllerPrefab)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>&
GlobalNamespace::BaseViewControllersInstaller::__cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> const&
GlobalNamespace::BaseViewControllersInstaller::__cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____safeAreaFocusedSimpleDialogPromptViewControllerPrefab;
}
constexpr void GlobalNamespace::BaseViewControllersInstaller::__cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewControllerPrefab(
    ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> value) {
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
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BaseViewControllersInstaller*>());
}
inline void GlobalNamespace::BaseViewControllersInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BaseViewControllersInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseViewControllersInstaller::BaseViewControllersInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
