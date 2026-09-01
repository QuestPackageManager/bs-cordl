#pragma once
// IWYU pragma private; include "UnityEngine\JointDrive.hpp"
#include "UnityEngine/zzzz__JointDrive_def.hpp"
#include "UnityEngine/zzzz__JointDriveMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::JointDrive.get_positionSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointDrive::*)()>(&::UnityEngine::JointDrive::get_positionSpring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_positionSpring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_positionSpring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(float_t)>(&::UnityEngine::JointDrive::set_positionSpring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_positionSpring", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.get_positionDamper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointDrive::*)()>(&::UnityEngine::JointDrive::get_positionDamper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_positionDamper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_positionDamper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(float_t)>(&::UnityEngine::JointDrive::set_positionDamper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_positionDamper", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.get_maximumForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointDrive::*)()>(&::UnityEngine::JointDrive::get_maximumForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_maximumForce", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_maximumForce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(float_t)>(&::UnityEngine::JointDrive::set_maximumForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_maximumForce", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.get_useAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::JointDrive::*)()>(&::UnityEngine::JointDrive::get_useAcceleration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b72380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_useAcceleration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_useAcceleration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(bool)>(&::UnityEngine::JointDrive::set_useAcceleration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b72390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_useAcceleration", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.get_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::JointDriveMode (::UnityEngine::JointDrive::*)()>(&::UnityEngine::JointDrive::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b7239c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointDrive.set_mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointDrive::*)(::UnityEngine::JointDriveMode)>(&::UnityEngine::JointDrive::set_mode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b723a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_mode", {}, { ::i2c::type_of<::UnityEngine::JointDriveMode>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::JointDrive::get_positionSpring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_positionSpring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::JointDrive::set_positionSpring(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_positionSpring", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::JointDrive::get_positionDamper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_positionDamper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::JointDrive::set_positionDamper(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_positionDamper", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::JointDrive::get_maximumForce() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_maximumForce", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::JointDrive::set_maximumForce(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_maximumForce", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::JointDrive::get_useAcceleration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_useAcceleration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::JointDrive::set_useAcceleration(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_useAcceleration", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::JointDriveMode UnityEngine::JointDrive::get_mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "get_mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::JointDriveMode>(*this, ___internal_method);
}
inline void UnityEngine::JointDrive::set_mode(::UnityEngine::JointDriveMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointDrive>(), { "set_mode", {}, { ::i2c::type_of<::UnityEngine::JointDriveMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_PositionSpring", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PositionDamper", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "m_MaximumForce", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UseAcceleration", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JointDrive::JointDrive(float_t m_PositionSpring, float_t m_PositionDamper, float_t m_MaximumForce, int32_t m_UseAcceleration) noexcept {
  this->m_PositionSpring = m_PositionSpring;
  this->m_PositionDamper = m_PositionDamper;
  this->m_MaximumForce = m_MaximumForce;
  this->m_UseAcceleration = m_UseAcceleration;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointDrive::JointDrive() {}
