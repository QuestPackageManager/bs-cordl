#pragma once
// IWYU pragma private; include "UnityEngine\JointMotor.hpp"
#include "UnityEngine/zzzz__JointMotor_def.hpp"
//  Writing Method size for method: ::UnityEngine::JointMotor.get_targetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointMotor::*)()>(&::UnityEngine::JointMotor::get_targetVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b723a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "get_targetVelocity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.set_targetVelocity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointMotor::*)(float_t)>(&::UnityEngine::JointMotor::set_targetVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b723b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "set_targetVelocity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.get_force
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::JointMotor::*)()>(&::UnityEngine::JointMotor::get_force)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b723b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "get_force", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.set_force
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointMotor::*)(float_t)>(&::UnityEngine::JointMotor::set_force)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b723c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "set_force", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.get_freeSpin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::JointMotor::*)()>(&::UnityEngine::JointMotor::get_freeSpin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b723c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "get_freeSpin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::JointMotor.set_freeSpin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::JointMotor::*)(bool)>(&::UnityEngine::JointMotor::set_freeSpin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b723d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "set_freeSpin", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::JointMotor::get_targetVelocity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "get_targetVelocity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::JointMotor::set_targetVelocity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "set_targetVelocity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::JointMotor::get_force() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "get_force", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::JointMotor::set_force(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "set_force", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::JointMotor::get_freeSpin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "get_freeSpin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::JointMotor::set_freeSpin(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::JointMotor>(), { "set_freeSpin", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_TargetVelocity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Force", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_FreeSpin", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JointMotor::JointMotor(float_t m_TargetVelocity, float_t m_Force, int32_t m_FreeSpin) noexcept {
  this->m_TargetVelocity = m_TargetVelocity;
  this->m_Force = m_Force;
  this->m_FreeSpin = m_FreeSpin;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointMotor::JointMotor() {}
