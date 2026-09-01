#pragma once
// IWYU pragma private; include "UnityEngine\WaitForEndOfFrame.hpp"
#include "UnityEngine/zzzz__YieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForEndOfFrame_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForEndOfFrame._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitForEndOfFrame::*)()>(&::UnityEngine::WaitForEndOfFrame::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6aebe84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForEndOfFrame*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::WaitForEndOfFrame::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForEndOfFrame*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::WaitForEndOfFrame* UnityEngine::WaitForEndOfFrame::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::WaitForEndOfFrame*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForEndOfFrame::WaitForEndOfFrame() {}
