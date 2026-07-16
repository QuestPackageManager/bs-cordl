#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyCenterStageManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterStageManager_def.hpp"
#include "GlobalNamespace/zzzz__CenterStageScreenController_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)(float_t, float_t)>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a09f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "Init", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.ActivateCenterStageManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a09f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "ActivateCenterStageManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.DeactivateCenterStageManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a0a0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "DeactivateCenterStageManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager.RecalculateCenterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a09fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "RecalculateCenterPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterStageManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterStageManager::*)()>(&::GlobalNamespace::MultiplayerLobbyCenterStageManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a0a10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__centerObjectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerObjectTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__centerObjectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerObjectTransform;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_set__centerObjectTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerObjectTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController>& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__centerStageScreenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerStageScreenController;
}
constexpr ::UnityW<::GlobalNamespace::CenterStageScreenController> const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__centerStageScreenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerStageScreenController;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_set__centerStageScreenController(::UnityW<::GlobalNamespace::CenterStageScreenController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerStageScreenController = value;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel* const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyStateDataModel = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__innerCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__innerCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_set__innerCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerCircleRadius = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__minOuterCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_get__minOuterCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterStageManager::__cordl_internal_set__minOuterCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minOuterCircleRadius = value;
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::Init(float_t innerCircleRadius, float_t minOuterCircleRadius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "Init", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerCircleRadius, minOuterCircleRadius);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::ActivateCenterStageManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "ActivateCenterStageManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::DeactivateCenterStageManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "DeactivateCenterStageManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::RecalculateCenterPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { "RecalculateCenterPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterStageManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyCenterStageManager* GlobalNamespace::MultiplayerLobbyCenterStageManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLobbyCenterStageManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterStageManager::MultiplayerLobbyCenterStageManager() {}
