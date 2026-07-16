#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/WaitForRestartFinish.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__WaitForRestartFinish_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::WaitForRestartFinish._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::WaitForRestartFinish::*)(float_t)>(&::UnityEngine::XR::OpenXR::WaitForRestartFinish::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x69ef82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::WaitForRestartFinish.get_keepWaiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::WaitForRestartFinish::*)()>(&::UnityEngine::XR::OpenXR::WaitForRestartFinish::get_keepWaiting)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x69f149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(), 7 }));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::OpenXR::WaitForRestartFinish::__cordl_internal_get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr float_t const& UnityEngine::XR::OpenXR::WaitForRestartFinish::__cordl_internal_get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::XR::OpenXR::WaitForRestartFinish::__cordl_internal_set_m_Timeout(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timeout = value;
}
inline void UnityEngine::XR::OpenXR::WaitForRestartFinish::_ctor(float_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline bool UnityEngine::XR::OpenXR::WaitForRestartFinish::get_keepWaiting() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::WaitForRestartFinish* UnityEngine::XR::OpenXR::WaitForRestartFinish::New_ctor(float_t timeout) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::WaitForRestartFinish*>(timeout));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::WaitForRestartFinish::WaitForRestartFinish() {}
