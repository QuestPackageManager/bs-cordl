#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerObstacleController.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleClippingController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool.OnCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::*)(
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*)>(&::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::OnCreated)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59bde98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59bdf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::OnCreated(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* item) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool::MultiplayerConnectedPlayerObstacleController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)(
    ::GlobalNamespace::ObstacleData*, ::by_ref<::GlobalNamespace::ObstacleSpawnData>)>(&::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x59bdc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59bde90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController>&
GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerConnectedPlayerObstacleClippingController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> const&
GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__cordl_internal_get__multiplayerConnectedPlayerObstacleClippingController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerConnectedPlayerObstacleClippingController;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::__cordl_internal_set__multiplayerConnectedPlayerObstacleClippingController(
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerConnectedPlayerObstacleClippingController = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Init(::GlobalNamespace::ObstacleData* obstacleData, ::by_ref<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* GlobalNamespace::MultiplayerConnectedPlayerObstacleController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController::MultiplayerConnectedPlayerObstacleController() {}
