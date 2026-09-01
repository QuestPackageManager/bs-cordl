#pragma once
// IWYU pragma private; include "GlobalNamespace\SelectModifiersViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::SelectModifiersViewController::*)()>(
    &::GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5963a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::SelectModifiersViewController::Setup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5963a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectModifiersViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5963a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { ::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)()>(&::GlobalNamespace::SelectModifiersViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5963af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>& GlobalNamespace::SelectModifiersViewController::__cordl_internal_get__gameplayModifiersPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersPanelController;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> const& GlobalNamespace::SelectModifiersViewController::__cordl_internal_get__gameplayModifiersPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersPanelController;
}
constexpr void GlobalNamespace::SelectModifiersViewController::__cordl_internal_set__gameplayModifiersPanelController(::UnityW<::GlobalNamespace::GameplayModifiersPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersPanelController = value;
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::SelectModifiersViewController::Setup(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::SelectModifiersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::SelectModifiersViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectModifiersViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectModifiersViewController* GlobalNamespace::SelectModifiersViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectModifiersViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectModifiersViewController::SelectModifiersViewController() {}
