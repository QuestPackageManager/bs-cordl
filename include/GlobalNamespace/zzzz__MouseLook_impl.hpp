#pragma once
// IWYU pragma private; include "GlobalNamespace/MouseLook.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__MouseLook_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MouseLook.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::MouseLook::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58e4b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.SetRotations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::MouseLook::SetRotations)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58e4bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "SetRotations", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.LookRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::MouseLook::LookRotation)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x58e4c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "LookRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.UpdateRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::MouseLook::UpdateRotation)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58e4f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "UpdateRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.SetCursorLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)(bool)>(&::GlobalNamespace::MouseLook::SetCursorLock)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58e50ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "SetCursorLock", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.UpdateCursorLock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)()>(&::GlobalNamespace::MouseLook::UpdateCursorLock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58e50dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "UpdateCursorLock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.GetCurrentXRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MouseLook::*)()>(&::GlobalNamespace::MouseLook::GetCurrentXRotation)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58e5278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "GetCurrentXRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.GetCurrentYRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MouseLook::*)()>(&::GlobalNamespace::MouseLook::GetCurrentYRotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58e52ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "GetCurrentYRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.InternalLockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)()>(&::GlobalNamespace::MouseLook::InternalLockUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58e5150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "InternalLockUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook.ClampRotationAroundXAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MouseLook::*)(::UnityEngine::Quaternion)>(
    &::GlobalNamespace::MouseLook::ClampRotationAroundXAxis)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58e4eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "ClampRotationAroundXAxis", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MouseLook._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MouseLook::*)()>(&::GlobalNamespace::MouseLook::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58e52e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MouseLook::__cordl_internal_get__xSensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSensitivity;
}
constexpr float_t const& GlobalNamespace::MouseLook::__cordl_internal_get__xSensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xSensitivity;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__xSensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xSensitivity = value;
}
constexpr float_t& GlobalNamespace::MouseLook::__cordl_internal_get__ySensitivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ySensitivity;
}
constexpr float_t const& GlobalNamespace::MouseLook::__cordl_internal_get__ySensitivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ySensitivity;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__ySensitivity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ySensitivity = value;
}
constexpr bool& GlobalNamespace::MouseLook::__cordl_internal_get__clampVerticalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampVerticalRotation;
}
constexpr bool const& GlobalNamespace::MouseLook::__cordl_internal_get__clampVerticalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clampVerticalRotation;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__clampVerticalRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clampVerticalRotation = value;
}
constexpr float_t& GlobalNamespace::MouseLook::__cordl_internal_get__minimumX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumX;
}
constexpr float_t const& GlobalNamespace::MouseLook::__cordl_internal_get__minimumX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumX;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__minimumX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimumX = value;
}
constexpr float_t& GlobalNamespace::MouseLook::__cordl_internal_get__maximumX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maximumX;
}
constexpr float_t const& GlobalNamespace::MouseLook::__cordl_internal_get__maximumX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maximumX;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__maximumX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maximumX = value;
}
constexpr bool& GlobalNamespace::MouseLook::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr bool const& GlobalNamespace::MouseLook::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__smooth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr float_t& GlobalNamespace::MouseLook::__cordl_internal_get__smoothTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothTime;
}
constexpr float_t const& GlobalNamespace::MouseLook::__cordl_internal_get__smoothTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothTime;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__smoothTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smoothTime = value;
}
constexpr bool& GlobalNamespace::MouseLook::__cordl_internal_get__lockCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockCursor;
}
constexpr bool const& GlobalNamespace::MouseLook::__cordl_internal_get__lockCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockCursor;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__lockCursor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockCursor = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MouseLook::__cordl_internal_get__characterTargetRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterTargetRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MouseLook::__cordl_internal_get__characterTargetRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterTargetRot;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__characterTargetRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characterTargetRot = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MouseLook::__cordl_internal_get__cameraTargetRot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraTargetRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MouseLook::__cordl_internal_get__cameraTargetRot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraTargetRot;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__cameraTargetRot(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cameraTargetRot = value;
}
constexpr bool& GlobalNamespace::MouseLook::__cordl_internal_get__cursorIsLocked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorIsLocked;
}
constexpr bool const& GlobalNamespace::MouseLook::__cordl_internal_get__cursorIsLocked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorIsLocked;
}
constexpr void GlobalNamespace::MouseLook::__cordl_internal_set__cursorIsLocked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursorIsLocked = value;
}
inline void GlobalNamespace::MouseLook::Init(::UnityEngine::Transform* character) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "Init", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character);
}
inline void GlobalNamespace::MouseLook::SetRotations(::UnityEngine::Quaternion characterRotation, ::UnityEngine::Quaternion cameraRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "SetRotations", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterRotation, cameraRotation);
}
inline void GlobalNamespace::MouseLook::LookRotation(::UnityEngine::Transform* character, ::UnityEngine::Transform* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "LookRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character, camera);
}
inline void GlobalNamespace::MouseLook::UpdateRotation(::UnityEngine::Transform* character, ::UnityEngine::Transform* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "UpdateRotation", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, character, camera);
}
inline void GlobalNamespace::MouseLook::SetCursorLock(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "SetCursorLock", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MouseLook::UpdateCursorLock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "UpdateCursorLock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::MouseLook::GetCurrentXRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "GetCurrentXRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::MouseLook::GetCurrentYRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "GetCurrentYRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MouseLook::InternalLockUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "InternalLockUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MouseLook::ClampRotationAroundXAxis(::UnityEngine::Quaternion q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { "ClampRotationAroundXAxis", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, q);
}
inline void GlobalNamespace::MouseLook::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MouseLook*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MouseLook* GlobalNamespace::MouseLook::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MouseLook*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MouseLook::MouseLook() {}
