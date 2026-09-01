#pragma once
// IWYU pragma private; include "UnityEngine\SoftJointLimit.hpp"
#include "UnityEngine/zzzz__SoftJointLimit_def.hpp"
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.get_limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SoftJointLimit::*)()>(&::UnityEngine::SoftJointLimit::get_limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "get_limit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.set_limit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimit::*)(float_t)>(&::UnityEngine::SoftJointLimit::set_limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "set_limit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.get_bounciness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SoftJointLimit::*)()>(&::UnityEngine::SoftJointLimit::get_bounciness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "get_bounciness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.set_bounciness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimit::*)(float_t)>(&::UnityEngine::SoftJointLimit::set_bounciness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "set_bounciness", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.get_contactDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::SoftJointLimit::*)()>(&::UnityEngine::SoftJointLimit::get_contactDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "get_contactDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SoftJointLimit.set_contactDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SoftJointLimit::*)(float_t)>(&::UnityEngine::SoftJointLimit::set_contactDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b72328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "set_contactDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::SoftJointLimit::get_limit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "get_limit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::SoftJointLimit::set_limit(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "set_limit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::SoftJointLimit::get_bounciness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "get_bounciness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::SoftJointLimit::set_bounciness(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "set_bounciness", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::SoftJointLimit::get_contactDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "get_contactDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::SoftJointLimit::set_contactDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SoftJointLimit>(), { "set_contactDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Limit", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Bounciness", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "m_ContactDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SoftJointLimit::SoftJointLimit(float_t m_Limit, float_t m_Bounciness, float_t m_ContactDistance) noexcept {
  this->m_Limit = m_Limit;
  this->m_Bounciness = m_Bounciness;
  this->m_ContactDistance = m_ContactDistance;
}
// Ctor Parameters []
constexpr ::UnityEngine::SoftJointLimit::SoftJointLimit() {}
