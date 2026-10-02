#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsJoint.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsJoint_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsJoint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::PhysicsJoint_JointType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::PhysicsJoint_JointType() {}
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::DistanceJoint{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::IgnoreJoint{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::RelativeJoint{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::SliderJoint{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::HingeJoint{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::FixedJoint{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType::WheelJoint{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsJoint::ToString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6fd3b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)(::System::Object*)>(&::UnityEngine::LowLevelPhysics2D::PhysicsJoint::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6fd3e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)(::UnityEngine::LowLevelPhysics2D::PhysicsJoint)>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsJoint::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6fd3e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsJoint::GetHashCode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6fd3eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.get_isValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsJoint::get_isValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6fd3d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "get_isValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.get_jointType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)()>(
    &::UnityEngine::LowLevelPhysics2D::PhysicsJoint::get_jointType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd3dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "get_jointType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LowLevelPhysics2D::PhysicsJoint.get_callbackTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::LowLevelPhysics2D::PhysicsJoint::*)()>(&::UnityEngine::LowLevelPhysics2D::PhysicsJoint::get_callbackTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd3f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "get_callbackTarget", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::LowLevelPhysics2D::PhysicsJoint::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsJoint::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsJoint::Equals(::UnityEngine::LowLevelPhysics2D::PhysicsJoint other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t UnityEngine::LowLevelPhysics2D::PhysicsJoint::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::LowLevelPhysics2D::PhysicsJoint::get_isValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "get_isValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType UnityEngine::LowLevelPhysics2D::PhysicsJoint::get_jointType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "get_jointType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LowLevelPhysics2D::PhysicsJoint_JointType>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::LowLevelPhysics2D::PhysicsJoint::get_callbackTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>(), { "get_callbackTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>"
constexpr UnityEngine::LowLevelPhysics2D::PhysicsJoint::operator ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>"
constexpr ::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>*
UnityEngine::LowLevelPhysics2D::PhysicsJoint::i___System__IEquatable_1___UnityEngine__LowLevelPhysics2D__PhysicsJoint_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::LowLevelPhysics2D::PhysicsJoint>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "index1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "world0", ty: "uint16_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "generation", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint::PhysicsJoint(int32_t index1, uint16_t world0, uint16_t generation) noexcept {
  this->index1 = index1;
  this->world0 = world0;
  this->generation = generation;
}
// Ctor Parameters []
constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsJoint::PhysicsJoint() {}
