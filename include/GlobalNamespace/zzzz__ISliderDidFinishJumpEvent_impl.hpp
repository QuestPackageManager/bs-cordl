#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidFinishJumpEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISliderDidFinishJumpEvent.HandleSliderDidFinishJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISliderDidFinishJumpEvent::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISliderDidFinishJumpEvent*>(), { ::i2c::class_of<::GlobalNamespace::ISliderDidFinishJumpEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISliderDidFinishJumpEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
