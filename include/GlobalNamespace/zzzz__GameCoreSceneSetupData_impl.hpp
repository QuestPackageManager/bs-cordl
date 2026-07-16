#pragma once
// IWYU pragma private; include "GlobalNamespace/GameCoreSceneSetupData.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__GameCoreSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameCoreSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameCoreSceneSetupData::*)()>(&::GlobalNamespace::GameCoreSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x590b300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameCoreSceneSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameCoreSceneSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameCoreSceneSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameCoreSceneSetupData* GlobalNamespace::GameCoreSceneSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameCoreSceneSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameCoreSceneSetupData::GameCoreSceneSetupData() {}
