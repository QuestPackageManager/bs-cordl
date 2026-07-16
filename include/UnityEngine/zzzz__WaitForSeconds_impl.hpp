#pragma once
// IWYU pragma private; include "UnityEngine/WaitForSeconds.hpp"
#include "UnityEngine/zzzz__YieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForSeconds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitForSeconds::*)(float_t)>(&::UnityEngine::WaitForSeconds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae8b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSeconds*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::WaitForSeconds::__cordl_internal_get_m_Seconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Seconds;
}
constexpr float_t const& UnityEngine::WaitForSeconds::__cordl_internal_get_m_Seconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Seconds;
}
constexpr void UnityEngine::WaitForSeconds::__cordl_internal_set_m_Seconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Seconds = value;
}
inline void UnityEngine::WaitForSeconds::_ctor(float_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSeconds*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline ::UnityEngine::WaitForSeconds* UnityEngine::WaitForSeconds::New_ctor(float_t seconds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::WaitForSeconds*>(seconds));
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForSeconds::WaitForSeconds() {}
