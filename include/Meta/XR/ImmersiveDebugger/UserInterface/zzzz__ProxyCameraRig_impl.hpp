#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/ProxyCameraRig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig.get_Camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::get_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a54fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "get_Camera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig.set_Camera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)(::UnityEngine::Camera*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::set_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a54fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "set_Camera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig.get_CameraTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::get_CameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a54fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "get_CameraTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig.set_CameraTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)(::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::set_CameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a54fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(),
                                                                                           { "set_CameraTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::Refresh)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a54ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig.SearchForCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::SearchForCamera)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5a550ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "SearchForCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a5520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_get__Camera_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Camera_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_get__Camera_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Camera_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_set__Camera_k__BackingField(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Camera_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_get__CameraTransform_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CameraTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_get__CameraTransform_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CameraTransform_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_set__CameraTransform_k__BackingField(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CameraTransform_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_get__cameraRig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_get__cameraRig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraRig;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::__cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraRig = value;
}
inline ::UnityW<::UnityEngine::Camera> Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::get_Camera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "get_Camera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::set_Camera(::UnityEngine::Camera* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "set_Camera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::get_CameraTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "get_CameraTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::set_CameraTransform(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(),
                                                                                         { "set_CameraTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::SearchForCamera() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { "SearchForCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig::ProxyCameraRig() {}
