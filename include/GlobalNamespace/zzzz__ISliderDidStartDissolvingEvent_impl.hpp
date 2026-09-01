#pragma once
// IWYU pragma private; include "GlobalNamespace\ISliderDidStartDissolvingEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISliderDidStartDissolvingEvent.HandleSliderDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISliderDidStartDissolvingEvent::*)(::GlobalNamespace::SliderController*, float_t)>(
    &::GlobalNamespace::ISliderDidStartDissolvingEvent::HandleSliderDidStartDissolving)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISliderDidStartDissolvingEvent*>(), { ::i2c::class_of<::GlobalNamespace::ISliderDidStartDissolvingEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISliderDidStartDissolvingEvent::HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float_t duration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISliderDidStartDissolvingEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController, duration);
}
