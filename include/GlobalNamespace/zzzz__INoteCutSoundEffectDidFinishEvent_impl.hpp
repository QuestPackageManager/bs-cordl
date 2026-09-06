#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteCutSoundEffectDidFinishEvent.hpp"
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent.HandleNoteCutSoundEffectDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::*)(::GlobalNamespace::NoteCutSoundEffect*)>(
    &::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::HandleNoteCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::INoteCutSoundEffectDidFinishEvent::HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutSoundEffect);
}
