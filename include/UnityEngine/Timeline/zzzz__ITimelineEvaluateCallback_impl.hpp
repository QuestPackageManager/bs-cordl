#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\ITimelineEvaluateCallback.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineEvaluateCallback_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ITimelineEvaluateCallback.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ITimelineEvaluateCallback::*)()>(&::UnityEngine::Timeline::ITimelineEvaluateCallback::Evaluate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(), { ::i2c::class_of<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(), 0 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::ITimelineEvaluateCallback::Evaluate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ITimelineEvaluateCallback*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
