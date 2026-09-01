#pragma once
// IWYU pragma private; include "GlobalNamespace\StartupErrorScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__StartupErrorScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StartupErrorSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartupErrorScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorScenesTransitionSetupData::*)(::GlobalNamespace::StartupErrorSceneSetupData*)>(
    &::GlobalNamespace::StartupErrorScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x591266c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorScenesTransitionSetupData*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::StartupErrorSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartupErrorScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartupErrorScenesTransitionSetupData::*)()>(&::GlobalNamespace::StartupErrorScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StartupErrorScenesTransitionSetupData::Init(::GlobalNamespace::StartupErrorSceneSetupData* startupErrorSceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorScenesTransitionSetupData*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::StartupErrorSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startupErrorSceneSetupData);
}
inline void GlobalNamespace::StartupErrorScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartupErrorScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StartupErrorScenesTransitionSetupData* GlobalNamespace::StartupErrorScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartupErrorScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartupErrorScenesTransitionSetupData::StartupErrorScenesTransitionSetupData() {}
