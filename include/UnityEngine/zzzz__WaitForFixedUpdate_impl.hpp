#pragma once
// IWYU pragma private; include "UnityEngine\WaitForFixedUpdate.hpp"
#include "UnityEngine/zzzz__YieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForFixedUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForFixedUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitForFixedUpdate::*)()>(&::UnityEngine::WaitForFixedUpdate::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aebe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForFixedUpdate*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::WaitForFixedUpdate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForFixedUpdate*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::WaitForFixedUpdate* UnityEngine::WaitForFixedUpdate::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::WaitForFixedUpdate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForFixedUpdate::WaitForFixedUpdate() {}
