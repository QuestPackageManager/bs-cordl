#pragma once
// IWYU pragma private; include "GlobalNamespace\AppStaticSettingsSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppStaticSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppStaticSettingsSO::*)()>(&::GlobalNamespace::AppStaticSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3704c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppStaticSettingsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__cordl_internal_get_requirePrivacyPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirePrivacyPolicy;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__cordl_internal_get_requirePrivacyPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirePrivacyPolicy;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__cordl_internal_set_requirePrivacyPolicy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requirePrivacyPolicy = value;
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__cordl_internal_get_enable360DegreeLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enable360DegreeLevels;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__cordl_internal_get_enable360DegreeLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enable360DegreeLevels;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__cordl_internal_set_enable360DegreeLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enable360DegreeLevels = value;
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__cordl_internal_get_enableCustomLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableCustomLevels;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__cordl_internal_get_enableCustomLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableCustomLevels;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__cordl_internal_set_enableCustomLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableCustomLevels = value;
}
inline void GlobalNamespace::AppStaticSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AppStaticSettingsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::AppStaticSettingsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AppStaticSettingsSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppStaticSettingsSO::AppStaticSettingsSO() {}
