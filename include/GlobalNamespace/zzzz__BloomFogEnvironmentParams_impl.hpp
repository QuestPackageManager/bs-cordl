#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironmentParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogEnvironmentParams::*)()>(&::GlobalNamespace::BloomFogEnvironmentParams::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2102164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironmentParams*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BloomFogEnvironmentParams::__get_attenuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attenuation;
}
constexpr float_t const& GlobalNamespace::BloomFogEnvironmentParams::__get_attenuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attenuation;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_attenuation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attenuation = value;
}
constexpr float_t& GlobalNamespace::BloomFogEnvironmentParams::__get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr float_t const& GlobalNamespace::BloomFogEnvironmentParams::__get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_offset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr float_t& GlobalNamespace::BloomFogEnvironmentParams::__get_heightFogStartY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heightFogStartY;
}
constexpr float_t const& GlobalNamespace::BloomFogEnvironmentParams::__get_heightFogStartY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heightFogStartY;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_heightFogStartY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heightFogStartY = value;
}
constexpr float_t& GlobalNamespace::BloomFogEnvironmentParams::__get_heightFogHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heightFogHeight;
}
constexpr float_t const& GlobalNamespace::BloomFogEnvironmentParams::__get_heightFogHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___heightFogHeight;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_heightFogHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___heightFogHeight = value;
}
constexpr float_t& GlobalNamespace::BloomFogEnvironmentParams::__get_autoExposureLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoExposureLimit;
}
constexpr float_t const& GlobalNamespace::BloomFogEnvironmentParams::__get_autoExposureLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoExposureLimit;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_autoExposureLimit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoExposureLimit = value;
}
constexpr bool& GlobalNamespace::BloomFogEnvironmentParams::__get_legacyAutoExposure() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___legacyAutoExposure;
}
constexpr bool const& GlobalNamespace::BloomFogEnvironmentParams::__get_legacyAutoExposure() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___legacyAutoExposure;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_legacyAutoExposure(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___legacyAutoExposure = value;
}
constexpr float_t& GlobalNamespace::BloomFogEnvironmentParams::__get_noteSpawnIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteSpawnIntensity;
}
constexpr float_t const& GlobalNamespace::BloomFogEnvironmentParams::__get_noteSpawnIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteSpawnIntensity;
}
constexpr void GlobalNamespace::BloomFogEnvironmentParams::__set_noteSpawnIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteSpawnIntensity = value;
}
inline ::GlobalNamespace::BloomFogEnvironmentParams* GlobalNamespace::BloomFogEnvironmentParams::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomFogEnvironmentParams*>());
}
inline void GlobalNamespace::BloomFogEnvironmentParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogEnvironmentParams*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomFogEnvironmentParams::BloomFogEnvironmentParams() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
