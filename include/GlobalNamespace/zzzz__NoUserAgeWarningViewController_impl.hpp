#pragma once
// IWYU pragma private; include "GlobalNamespace\NoUserAgeWarningViewController.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_impl.hpp"
#include "GlobalNamespace/zzzz__NoUserAgeWarningViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoUserAgeWarningViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoUserAgeWarningViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::NoUserAgeWarningViewController::DidActivate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a1c194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), { ::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoUserAgeWarningViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoUserAgeWarningViewController::*)(bool, bool)>(&::GlobalNamespace::NoUserAgeWarningViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a1c280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), { ::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoUserAgeWarningViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoUserAgeWarningViewController::*)()>(&::GlobalNamespace::NoUserAgeWarningViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1c2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::NoUserAgeWarningViewController::__cordl_internal_get__confirmButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confirmButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::NoUserAgeWarningViewController::__cordl_internal_get__confirmButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____confirmButton;
}
constexpr void GlobalNamespace::NoUserAgeWarningViewController::__cordl_internal_set__confirmButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____confirmButton = value;
}
inline void GlobalNamespace::NoUserAgeWarningViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::NoUserAgeWarningViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::NoUserAgeWarningViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoUserAgeWarningViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoUserAgeWarningViewController* GlobalNamespace::NoUserAgeWarningViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoUserAgeWarningViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoUserAgeWarningViewController::NoUserAgeWarningViewController() {}
