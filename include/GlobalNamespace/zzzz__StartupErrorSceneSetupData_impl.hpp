#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorSceneSetupData::*)(::StringW, ::StringW)>(&::GlobalNamespace::StartupErrorSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590c3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_titleKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleKey;
}
constexpr ::StringW const& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_titleKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___titleKey;
}
constexpr void GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_set_titleKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___titleKey = value;
}
constexpr ::StringW& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_subtitleKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtitleKey;
}
constexpr ::StringW const& GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_get_subtitleKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subtitleKey;
}
constexpr void GlobalNamespace::StartupErrorSceneSetupData::__cordl_internal_set_subtitleKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subtitleKey = value;
}
inline void GlobalNamespace::StartupErrorSceneSetupData::_ctor(::StringW titleKey, ::StringW subtitleKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorSceneSetupData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, titleKey, subtitleKey);
}
inline ::GlobalNamespace::StartupErrorSceneSetupData* GlobalNamespace::StartupErrorSceneSetupData::New_ctor(::StringW titleKey, ::StringW subtitleKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartupErrorSceneSetupData*>(titleKey, subtitleKey));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorSceneSetupData::StartupErrorSceneSetupData() {}
