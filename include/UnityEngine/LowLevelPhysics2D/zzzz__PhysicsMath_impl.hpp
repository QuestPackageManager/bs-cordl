#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsMath.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsMath_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorld_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.Atan2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::LowLevelPhysics2D::PhysicsMath::Atan2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6fd88ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(), { "Atan2", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.Swizzle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsMath::Swizzle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6fd88ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
                                                { "Swizzle", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.ToPosition3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsMath::ToPosition3D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fd8978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(), { "ToPosition3D",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                               ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.ToRotation2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Quaternion, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsMath::ToRotation2D)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6fd8a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
                                         { "ToRotation2D", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.AngularVelocityToQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t, float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsMath::AngularVelocityToQuaternion)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6fd8b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
            { "AngularVelocityToQuaternion", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.ToRotationFast3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsMath::ToRotationFast3D)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6fd8cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
                                                { "ToRotationFast3D", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsMath.ToRotationSlow3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(float_t, ::UnityEngine::Quaternion, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsMath::ToRotationSlow3D)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6fd8e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
            { "ToRotationSlow3D", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::LowLevelPhysics2D::PhysicsMath::Atan2(float_t y, float_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(), { "Atan2", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, y, x);
}
inline ::UnityEngine::Vector3 UnityEngine::LowLevelPhysics2D::PhysicsMath::Swizzle(::UnityEngine::Vector3 position, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
                                              { "Swizzle", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position, transformPlane);
}
inline ::UnityEngine::Vector3 UnityEngine::LowLevelPhysics2D::PhysicsMath::ToPosition3D(::UnityEngine::Vector2 position, ::UnityEngine::Vector3 reference,
                                                                                        ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(), { "ToPosition3D",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position, reference, transformPlane);
}
inline float_t UnityEngine::LowLevelPhysics2D::PhysicsMath::ToRotation2D(::UnityEngine::Quaternion quaternion, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
                                       { "ToRotation2D", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, quaternion, transformPlane);
}
inline ::UnityEngine::Quaternion UnityEngine::LowLevelPhysics2D::PhysicsMath::AngularVelocityToQuaternion(float_t angularVelocity, float_t deltaTime,
                                                                                                          ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
          { "AngularVelocityToQuaternion", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angularVelocity, deltaTime, transformPlane);
}
inline ::UnityEngine::Quaternion UnityEngine::LowLevelPhysics2D::PhysicsMath::ToRotationFast3D(float_t angle, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
                                              { "ToRotationFast3D", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle, transformPlane);
}
inline ::UnityEngine::Quaternion UnityEngine::LowLevelPhysics2D::PhysicsMath::ToRotationSlow3D(float_t angle, ::UnityEngine::Quaternion reference,
                                                                                               ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsMath>(),
          { "ToRotationSlow3D", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, angle, reference, transformPlane);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsMath::PhysicsMath() {}
