#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningScenesTransitionSetupData::*)(::GlobalNamespace::HealthWarningSceneSetupData*)>(
    &::GlobalNamespace::HealthWarningScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x590d1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupData*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::HealthWarningSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthWarningScenesTransitionSetupData::*)()>(&::GlobalNamespace::HealthWarningScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HealthWarningScenesTransitionSetupData::Init(::GlobalNamespace::HealthWarningSceneSetupData* healthWarningSceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupData*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::HealthWarningSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, healthWarningSceneSetupData);
}
inline void GlobalNamespace::HealthWarningScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthWarningScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningScenesTransitionSetupData* GlobalNamespace::HealthWarningScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HealthWarningScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupData::HealthWarningScenesTransitionSetupData() {}
