#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsMenuViewControllersInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewControllersInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsMenuViewController_def.hpp"
#include "GlobalNamespace/zzzz__TabBarViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewControllersInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewControllersInstaller::*)()>(
    &::GlobalNamespace::MainSettingsMenuViewControllersInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59f7500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewControllersInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewControllersInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsMenuViewControllersInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainSettingsMenuViewControllersInstaller::*)()>(&::GlobalNamespace::MainSettingsMenuViewControllersInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f75c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewControllersInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__defaultSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const&
GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__defaultSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSettingsMenuViewController;
}
constexpr void GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_set__defaultSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultSettingsMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__oculusPCSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusPCSettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const&
GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__oculusPCSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusPCSettingsMenuViewController;
}
constexpr void GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_set__oculusPCSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusPCSettingsMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__questSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questSettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__questSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questSettingsMenuViewController;
}
constexpr void GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_set__questSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____questSettingsMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__psvrSettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psvrSettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__psvrSettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psvrSettingsMenuViewController;
}
constexpr void GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_set__psvrSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____psvrSettingsMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__psvr2SettingsMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psvr2SettingsMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__psvr2SettingsMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____psvr2SettingsMenuViewController;
}
constexpr void GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_set__psvr2SettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____psvr2SettingsMenuViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::TabBarViewController>& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__tabBarViewControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tabBarViewControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::TabBarViewController> const& GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_get__tabBarViewControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tabBarViewControllerPrefab;
}
constexpr void GlobalNamespace::MainSettingsMenuViewControllersInstaller::__cordl_internal_set__tabBarViewControllerPrefab(::UnityW<::GlobalNamespace::TabBarViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tabBarViewControllerPrefab = value;
}
inline void GlobalNamespace::MainSettingsMenuViewControllersInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewControllersInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsMenuViewControllersInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainSettingsMenuViewControllersInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsMenuViewControllersInstaller* GlobalNamespace::MainSettingsMenuViewControllersInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainSettingsMenuViewControllersInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsMenuViewControllersInstaller::MainSettingsMenuViewControllersInstaller() {}
