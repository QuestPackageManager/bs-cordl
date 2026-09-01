#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerObstacleClippingController.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleClippingController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController.SetClippingParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59bdaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(),
                                                             { "SetClippingParams", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bdbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>&
GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const&
GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__cordl_internal_set__materialPropertyBlockControllers(
    ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::setStaticF__clippingPlanePositionID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_clippingPlanePositionID", ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::getStaticF__clippingPlanePositionID() {
  return ::cordl_internals::getStaticField<int32_t, "_clippingPlanePositionID", ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>();
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::setStaticF__clippingPlaneNormalID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_clippingPlaneNormalID", ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::getStaticF__clippingPlaneNormalID() {
  return ::cordl_internals::getStaticField<int32_t, "_clippingPlaneNormalID", ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>();
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(),
                                                           { "SetClippingParams", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, normal);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::MultiplayerConnectedPlayerObstacleClippingController() {}
