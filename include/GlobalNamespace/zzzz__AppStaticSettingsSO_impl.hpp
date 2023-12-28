#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppStaticSettingsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppStaticSettingsSO::*)()>(&::GlobalNamespace::AppStaticSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2239bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppStaticSettingsSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_requirePrivacyPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirePrivacyPolicy;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_requirePrivacyPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requirePrivacyPolicy;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_requirePrivacyPolicy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requirePrivacyPolicy = value;
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_enable360DegreeLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enable360DegreeLevels;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_enable360DegreeLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enable360DegreeLevels;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_enable360DegreeLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enable360DegreeLevels = value;
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_enableCustomLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableCustomLevels;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_enableCustomLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableCustomLevels;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_enableCustomLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableCustomLevels = value;
}
constexpr bool& GlobalNamespace::AppStaticSettingsSO::__get_disableMultiplayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableMultiplayer;
}
constexpr bool const& GlobalNamespace::AppStaticSettingsSO::__get_disableMultiplayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableMultiplayer;
}
constexpr void GlobalNamespace::AppStaticSettingsSO::__set_disableMultiplayer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableMultiplayer = value;
}
inline ::GlobalNamespace::AppStaticSettingsSO* GlobalNamespace::AppStaticSettingsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AppStaticSettingsSO*>());
}
inline void GlobalNamespace::AppStaticSettingsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppStaticSettingsSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppStaticSettingsSO::AppStaticSettingsSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
