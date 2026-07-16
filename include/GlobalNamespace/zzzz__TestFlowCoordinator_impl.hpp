#pragma once
// IWYU pragma private; include "GlobalNamespace/TestFlowCoordinator.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__TestFlowCoordinator_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::TestFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5937c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::TestFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestFlowCoordinator::*)()>(&::GlobalNamespace::TestFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5937c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__leftViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__leftViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__leftViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__rightViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__rightViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__rightViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__bottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__bottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__bottomScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bottomScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__topScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::TestFlowCoordinator::__cordl_internal_get__topScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr void GlobalNamespace::TestFlowCoordinator::__cordl_internal_set__topScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topScreenViewController = value;
}
inline void GlobalNamespace::TestFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TestFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::TestFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestFlowCoordinator* GlobalNamespace::TestFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestFlowCoordinator::TestFlowCoordinator() {}
