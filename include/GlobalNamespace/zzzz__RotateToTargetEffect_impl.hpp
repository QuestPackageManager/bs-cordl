#pragma once
// IWYU pragma private; include "GlobalNamespace/RotateToTargetEffect.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__RotateToTargetEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RotateToTargetEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateToTargetEffect::*)()>(&::GlobalNamespace::RotateToTargetEffect::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df0094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotateToTargetEffect.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateToTargetEffect::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::RotateToTargetEffect::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df01b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { ::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotateToTargetEffect.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateToTargetEffect::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::RotateToTargetEffect::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df0218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { ::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotateToTargetEffect.CaptureStartRotationIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateToTargetEffect::*)()>(&::GlobalNamespace::RotateToTargetEffect::CaptureStartRotationIfNeeded)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5df0098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { "CaptureStartRotationIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotateToTargetEffect.Rotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateToTargetEffect::*)(float_t)>(&::GlobalNamespace::RotateToTargetEffect::Rotate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5df01b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { "Rotate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotateToTargetEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RotateToTargetEffect::*)()>(&::GlobalNamespace::RotateToTargetEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5df021c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::RotateToTargetEffect::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__targetLocalEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLocalEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__targetLocalEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetLocalEulerAngles;
}
constexpr void GlobalNamespace::RotateToTargetEffect::__cordl_internal_set__targetLocalEulerAngles(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetLocalEulerAngles = value;
}
constexpr bool& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__hasCapturedStartRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCapturedStartRotation;
}
constexpr bool const& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__hasCapturedStartRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCapturedStartRotation;
}
constexpr void GlobalNamespace::RotateToTargetEffect::__cordl_internal_set__hasCapturedStartRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasCapturedStartRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__startRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__startRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startRotation;
}
constexpr void GlobalNamespace::RotateToTargetEffect::__cordl_internal_set__startRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__targetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::RotateToTargetEffect::__cordl_internal_get__targetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetRotation;
}
constexpr void GlobalNamespace::RotateToTargetEffect::__cordl_internal_set__targetRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetRotation = value;
}
inline void GlobalNamespace::RotateToTargetEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotateToTargetEffect::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::RotateToTargetEffect::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::RotateToTargetEffect::CaptureStartRotationIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { "CaptureStartRotationIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RotateToTargetEffect::Rotate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { "Rotate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RotateToTargetEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RotateToTargetEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RotateToTargetEffect* GlobalNamespace::RotateToTargetEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RotateToTargetEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotateToTargetEffect::RotateToTargetEffect() {}
