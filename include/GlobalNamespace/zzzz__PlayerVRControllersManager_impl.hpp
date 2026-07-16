#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerVRControllersManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerVRControllersManager_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.get_leftHandVRController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRController> (::GlobalNamespace::PlayerVRControllersManager::*)()>(
    &::GlobalNamespace::PlayerVRControllersManager::get_leftHandVRController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e6760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "get_leftHandVRController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.get_rightHandVRController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRController> (::GlobalNamespace::PlayerVRControllersManager::*)()>(
    &::GlobalNamespace::PlayerVRControllersManager::get_rightHandVRController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e6768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "get_rightHandVRController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.SetupAutoplayForAllControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVRControllersManager::*)()>(&::GlobalNamespace::PlayerVRControllersManager::SetupAutoplayForAllControllers)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59e6770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "SetupAutoplayForAllControllers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.DisableAutoplayForAllControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVRControllersManager::*)()>(&::GlobalNamespace::PlayerVRControllersManager::DisableAutoplayForAllControllers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59e67bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "DisableAutoplayForAllControllers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerVRControllersManager::*)()>(&::GlobalNamespace::PlayerVRControllersManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e6804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRController>& GlobalNamespace::PlayerVRControllersManager::__cordl_internal_get__leftHandVRController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandVRController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& GlobalNamespace::PlayerVRControllersManager::__cordl_internal_get__leftHandVRController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandVRController;
}
constexpr void GlobalNamespace::PlayerVRControllersManager::__cordl_internal_set__leftHandVRController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandVRController = value;
}
constexpr ::UnityW<::GlobalNamespace::VRController>& GlobalNamespace::PlayerVRControllersManager::__cordl_internal_get__rightHandVRController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandVRController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& GlobalNamespace::PlayerVRControllersManager::__cordl_internal_get__rightHandVRController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandVRController;
}
constexpr void GlobalNamespace::PlayerVRControllersManager::__cordl_internal_set__rightHandVRController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandVRController = value;
}
inline ::UnityW<::GlobalNamespace::VRController> GlobalNamespace::PlayerVRControllersManager::get_leftHandVRController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "get_leftHandVRController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRController>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRController> GlobalNamespace::PlayerVRControllersManager::get_rightHandVRController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "get_rightHandVRController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRController>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVRControllersManager::SetupAutoplayForAllControllers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "SetupAutoplayForAllControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVRControllersManager::DisableAutoplayForAllControllers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { "DisableAutoplayForAllControllers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVRControllersManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerVRControllersManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerVRControllersManager* GlobalNamespace::PlayerVRControllersManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerVRControllersManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerVRControllersManager::PlayerVRControllersManager() {}
