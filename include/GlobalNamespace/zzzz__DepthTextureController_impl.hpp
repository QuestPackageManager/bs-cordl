#pragma once
// IWYU pragma private; include "GlobalNamespace/DepthTextureController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DepthTextureController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DepthTextureController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DepthTextureController::*)(::GlobalNamespace::SettingsManager*)>(&::GlobalNamespace::DepthTextureController::Init)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58ff830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DepthTextureController*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DepthTextureController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DepthTextureController::*)()>(&::GlobalNamespace::DepthTextureController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ff934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DepthTextureController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DepthTextureController::Init(::GlobalNamespace::SettingsManager* settingsManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DepthTextureController*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::SettingsManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsManager);
}
inline void GlobalNamespace::DepthTextureController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DepthTextureController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DepthTextureController* GlobalNamespace::DepthTextureController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DepthTextureController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DepthTextureController::DepthTextureController() {}
