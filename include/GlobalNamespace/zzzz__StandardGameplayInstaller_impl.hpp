#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardGameplayInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__StandardGameplayInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StandardGameplaySceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardGameplayInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardGameplayInstaller::*)()>(&::GlobalNamespace::StandardGameplayInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x59fecf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardGameplayInstaller*>(), { ::i2c::class_of<::GlobalNamespace::StandardGameplayInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardGameplayInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardGameplayInstaller::*)()>(&::GlobalNamespace::StandardGameplayInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ff0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardGameplayInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& GlobalNamespace::StandardGameplayInstaller::__cordl_internal_get__standardSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardSceneSetupData;
}
constexpr ::GlobalNamespace::StandardGameplaySceneSetupData* const& GlobalNamespace::StandardGameplayInstaller::__cordl_internal_get__standardSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardSceneSetupData;
}
constexpr void GlobalNamespace::StandardGameplayInstaller::__cordl_internal_set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardSceneSetupData = value;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*& GlobalNamespace::StandardGameplayInstaller::__cordl_internal_get__gameplayAdditionalInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformation;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const& GlobalNamespace::StandardGameplayInstaller::__cordl_internal_get__gameplayAdditionalInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformation;
}
constexpr void GlobalNamespace::StandardGameplayInstaller::__cordl_internal_set__gameplayAdditionalInformation(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayAdditionalInformation = value;
}
inline void GlobalNamespace::StandardGameplayInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::StandardGameplayInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardGameplayInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardGameplayInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardGameplayInstaller* GlobalNamespace::StandardGameplayInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardGameplayInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardGameplayInstaller::StandardGameplayInstaller() {}
