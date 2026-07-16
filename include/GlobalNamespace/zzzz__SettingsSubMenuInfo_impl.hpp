#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsSubMenuInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SettingsSubMenuInfo_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo.get_viewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::get_viewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a144e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsSubMenuInfo*>(), { "get_viewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo.get_localizedMenuName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a144e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsSubMenuInfo*>(), { "get_localizedMenuName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SettingsSubMenuInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SettingsSubMenuInfo::*)()>(&::GlobalNamespace::SettingsSubMenuInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a144f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsSubMenuInfo*>(), { ".ctor", {}, {} })));
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
  this->____viewController = value;
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
  this->____menuName = value;
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::SettingsSubMenuInfo::get_viewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsSubMenuInfo*>(), { "get_viewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SettingsSubMenuInfo::get_localizedMenuName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsSubMenuInfo*>(), { "get_localizedMenuName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SettingsSubMenuInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SettingsSubMenuInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SettingsSubMenuInfo* GlobalNamespace::SettingsSubMenuInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SettingsSubMenuInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SettingsSubMenuInfo::SettingsSubMenuInfo() {}
