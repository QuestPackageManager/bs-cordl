#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsBody.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType::PhysicsBody_BodyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType::PhysicsBody_BodyType() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType::Dynamic{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType::Kinematic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType::Static{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::PhysicsBody_BodyConstraints(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::PhysicsBody_BodyConstraints() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::PositionX{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::PositionY{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::Rotation{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::Position{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints::All{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode::PhysicsBody_TransformWriteMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode::PhysicsBody_TransformWriteMode() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode::Current{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode::Interpolate{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode::Extrapolate{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode::Off{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsBody::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6fd4f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)(::System::Object*)>(&::UnityEngine::LowLevelPhysics2D::PhysicsBody::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)(::UnityEngine::LowLevelPhysics2D::PhysicsBody)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6fd5284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsBody::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd52bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsBody::get_isValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6fd5190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody::get_type)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd51d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody.get_callbackTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::LowLevelPhysics2D::PhysicsBody::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsBody::get_callbackTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd5344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "get_callbackTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsBody::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsBody::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsBody::Equals(::UnityEngine::LowLevelPhysics2D::PhysicsBody other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::LowLevelPhysics2D::PhysicsBody::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsBody::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType UnityEngine::LowLevelPhysics2D::PhysicsBody::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsBody::get_callbackTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(), { "get_callbackTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsBody::operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>"
constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>*
UnityEngine::LowLevelPhysics2D::PhysicsBody::i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsBody_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsBody>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Index1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_World0", ty: "uint16_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "m_Generation", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody::PhysicsBody(int32_t m_Index1, uint16_t m_World0, uint16_t m_Generation) noexcept {
  this->m_Index1 = m_Index1;
  this->m_World0 = m_World0;
  this->m_Generation = m_Generation;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody::PhysicsBody() {}
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBody (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd5388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_transformWriteMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_transformWriteMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd5390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_transformWriteMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_physicsTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsTransform (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_physicsTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd5398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_physicsTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_linearVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_linearVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd53a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_linearVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_angularVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_angularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fd53ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_angularVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_positionFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_positionFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd53b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_positionFrom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.set_positionFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::set_positionFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd53c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(),
                                                                                           { "set_positionFrom", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.get_rotationFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_rotationFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd53cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_rotationFrom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween.set_rotationFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::*)(::UnityEngine::Quaternion)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::set_rotationFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6fd53d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(),
                                                                                           { "set_rotationFrom", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_body() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBody>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_transformWriteMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_transformWriteMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsTransform UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_physicsTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_physicsTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsTransform>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_linearVelocity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_linearVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline float_t UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_angularVelocity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_angularVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_positionFrom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_positionFrom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::set_positionFrom(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(),
                                                                                         { "set_positionFrom", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::get_rotationFrom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(), { "get_rotationFrom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method);
}
inline void UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::set_rotationFrom(::UnityEngine::Quaternion value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween>(),
                                                                                         { "set_rotationFrom", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Body", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TransformWriteMode", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PhysicsTransform", ty:
// "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_LinearVelocity", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularVelocity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PositionFrom", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RotationFrom", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment:
// None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::PhysicsBody_TransformWriteTween(::UnityEngine::LowLevelPhysics2D::PhysicsBody m_Body,
                                                                                                             ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode m_TransformWriteMode,
                                                                                                             ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_PhysicsTransform,
                                                                                                             ::UnityEngine::Vector2 m_LinearVelocity, float_t m_AngularVelocity,
                                                                                                             ::UnityEngine::Vector3 m_PositionFrom, ::UnityEngine::Quaternion m_RotationFrom) noexcept {
  this->m_Body = m_Body;
  this->m_TransformWriteMode = m_TransformWriteMode;
  this->m_PhysicsTransform = m_PhysicsTransform;
  this->m_LinearVelocity = m_LinearVelocity;
  this->m_AngularVelocity = m_AngularVelocity;
  this->m_PositionFrom = m_PositionFrom;
  this->m_RotationFrom = m_RotationFrom;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteTween::PhysicsBody_TransformWriteTween() {}
