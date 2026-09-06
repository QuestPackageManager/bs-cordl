#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatEffectDidFinishEvent.hpp"
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatEffectDidFinishEvent.HandleBeatEffectDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IBeatEffectDidFinishEvent::*)(::GlobalNamespace::BeatEffect*)>(
    &::GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatEffectDidFinishEvent*>(), { ::i2c::class_of<::GlobalNamespace::IBeatEffectDidFinishEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatEffectDidFinishEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatEffect);
}
