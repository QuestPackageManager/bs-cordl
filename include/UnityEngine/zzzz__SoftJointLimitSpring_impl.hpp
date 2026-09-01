#pragma once
// IWYU pragma private; include "UnityEngine\SoftJointLimitSpring.hpp"
#include "UnityEngine/zzzz__SoftJointLimitSpring_def.hpp"
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.get_spring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SoftJointLimitSpring::*)()>(&::UnityEngine::SoftJointLimitSpring::get_spring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "get_spring", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.set_spring
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimitSpring::*)(float_t)>(&::UnityEngine::SoftJointLimitSpring::set_spring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "set_spring", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.get_damper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SoftJointLimitSpring::*)()>(&::UnityEngine::SoftJointLimitSpring::get_damper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "get_damper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimitSpring.set_damper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimitSpring::*)(float_t)>(&::UnityEngine::SoftJointLimitSpring::set_damper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "set_damper", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::SoftJointLimitSpring::get_spring() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "get_spring", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::SoftJointLimitSpring::set_spring(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "set_spring", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::SoftJointLimitSpring::get_damper() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "get_damper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::SoftJointLimitSpring::set_damper(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimitSpring>(), { "set_damper", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Spring", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Damper", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SoftJointLimitSpring::SoftJointLimitSpring(float_t m_Spring, float_t m_Damper) noexcept {
  this->m_Spring = m_Spring;
  this->m_Damper = m_Damper;
}
// Ctor Parameters []
constexpr ::UnityEngine::SoftJointLimitSpring::SoftJointLimitSpring() {}
