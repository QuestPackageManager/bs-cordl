#pragma once
// IWYU pragma private; include "GlobalNamespace\GraphicSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GraphicSettingsViewController::*)()>(&::GlobalNamespace::GraphicSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a20444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::GraphicSettingsViewController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::GraphicSettingsViewController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::GraphicSettingsViewController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::GraphicSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GraphicSettingsViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GraphicSettingsViewController* GlobalNamespace::GraphicSettingsViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GraphicSettingsViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingsViewController::GraphicSettingsViewController() {}
