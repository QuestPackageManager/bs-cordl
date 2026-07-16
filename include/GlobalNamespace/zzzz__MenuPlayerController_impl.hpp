#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuPlayerController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_leftController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRController> (::GlobalNamespace::MenuPlayerController::*)()>(
    &::GlobalNamespace::MenuPlayerController::get_leftController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a094fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_leftController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_rightController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRController> (::GlobalNamespace::MenuPlayerController::*)()>(
    &::GlobalNamespace::MenuPlayerController::get_rightController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a09504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_rightController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_headPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::get_headPos)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a0950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_headPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_headRot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::get_headRot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a09524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_headRot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0953c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRController>& GlobalNamespace::MenuPlayerController::__cordl_internal_get__leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& GlobalNamespace::MenuPlayerController::__cordl_internal_get__leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftController;
}
constexpr void GlobalNamespace::MenuPlayerController::__cordl_internal_set__leftController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftController = value;
}
constexpr ::UnityW<::GlobalNamespace::VRController>& GlobalNamespace::MenuPlayerController::__cordl_internal_get__rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& GlobalNamespace::MenuPlayerController::__cordl_internal_get__rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightController;
}
constexpr void GlobalNamespace::MenuPlayerController::__cordl_internal_set__rightController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightController = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MenuPlayerController::__cordl_internal_get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MenuPlayerController::__cordl_internal_get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void GlobalNamespace::MenuPlayerController::__cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTransform = value;
}
inline ::UnityW<::GlobalNamespace::VRController> GlobalNamespace::MenuPlayerController::get_leftController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_leftController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRController>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRController> GlobalNamespace::MenuPlayerController::get_rightController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_rightController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRController>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MenuPlayerController::get_headPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_headPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MenuPlayerController::get_headRot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { "get_headRot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::MenuPlayerController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuPlayerController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuPlayerController* GlobalNamespace::MenuPlayerController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuPlayerController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuPlayerController::MenuPlayerController() {}
