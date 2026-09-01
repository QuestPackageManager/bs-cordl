#pragma once
// IWYU pragma private; include "GlobalNamespace\ShaderWarmupScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderWarmupScenesTransitionSetupData::*)(::GlobalNamespace::ShaderWarmupSceneSetupData*)>(
    &::GlobalNamespace::ShaderWarmupScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59122e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::ShaderWarmupSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ShaderWarmupScenesTransitionSetupData::*)()>(&::GlobalNamespace::ShaderWarmupScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ShaderWarmupScenesTransitionSetupData::Init(::GlobalNamespace::ShaderWarmupSceneSetupData* shaderWarmupSceneSetupData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::ShaderWarmupSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shaderWarmupSceneSetupData);
}
inline void GlobalNamespace::ShaderWarmupScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* GlobalNamespace::ShaderWarmupScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData::ShaderWarmupScenesTransitionSetupData() {}
