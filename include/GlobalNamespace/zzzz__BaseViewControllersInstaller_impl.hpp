#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseViewControllersInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__BaseViewControllersInstaller_def.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseViewControllersInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseViewControllersInstaller::*)()>(&::GlobalNamespace::BaseViewControllersInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59f4404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseViewControllersInstaller*>(), { ::i2c::class_of<::GlobalNamespace::BaseViewControllersInstaller*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseViewControllersInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseViewControllersInstaller::*)()>(&::GlobalNamespace::BaseViewControllersInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f44cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseViewControllersInstaller*>(), { ".ctor", {}, {} })));
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
  this->____simpleDialogPromptViewControllerPrefab = value;
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
  this->____safeAreaFocusedSimpleDialogPromptViewControllerPrefab = value;
}
inline void GlobalNamespace::BaseViewControllersInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseViewControllersInstaller*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseViewControllersInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseViewControllersInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseViewControllersInstaller* GlobalNamespace::BaseViewControllersInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseViewControllersInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseViewControllersInstaller::BaseViewControllersInstaller() {}
