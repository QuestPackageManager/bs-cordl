#pragma once
// IWYU pragma private; include "UnityEngine\SliderState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SliderState_def.hpp"
//  Writing Method size for method: ::UnityEngine::SliderState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SliderState::*)()>(&::UnityEngine::SliderState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b51bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SliderState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::SliderState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::SliderState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SliderState* UnityEngine::SliderState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SliderState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SliderState::SliderState() {}
