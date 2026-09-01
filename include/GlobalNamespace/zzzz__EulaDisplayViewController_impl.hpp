#pragma once
// IWYU pragma private; include "GlobalNamespace\EulaDisplayViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__EulaDisplayViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EulaDisplayViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EulaDisplayViewController::*)(bool, bool, bool)>(&::GlobalNamespace::EulaDisplayViewController::DidActivate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a1939c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EulaDisplayViewController*>(), { ::i2c::class_of<::GlobalNamespace::EulaDisplayViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaDisplayViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EulaDisplayViewController::*)()>(&::GlobalNamespace::EulaDisplayViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a193e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EulaDisplayViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TextPageScrollView>& GlobalNamespace::EulaDisplayViewController::__cordl_internal_get__textPageScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr ::UnityW<::HMUI::TextPageScrollView> const& GlobalNamespace::EulaDisplayViewController::__cordl_internal_get__textPageScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textPageScrollView;
}
constexpr void GlobalNamespace::EulaDisplayViewController::__cordl_internal_set__textPageScrollView(::UnityW<::HMUI::TextPageScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textPageScrollView = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset>& GlobalNamespace::EulaDisplayViewController::__cordl_internal_get__localizedTextAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedTextAsset;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedTextAsset> const& GlobalNamespace::EulaDisplayViewController::__cordl_internal_get__localizedTextAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedTextAsset;
}
constexpr void GlobalNamespace::EulaDisplayViewController::__cordl_internal_set__localizedTextAsset(::UnityW<::GlobalNamespace::LocalizedTextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedTextAsset = value;
}
inline void GlobalNamespace::EulaDisplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EulaDisplayViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EulaDisplayViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EulaDisplayViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EulaDisplayViewController* GlobalNamespace::EulaDisplayViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EulaDisplayViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EulaDisplayViewController::EulaDisplayViewController() {}
