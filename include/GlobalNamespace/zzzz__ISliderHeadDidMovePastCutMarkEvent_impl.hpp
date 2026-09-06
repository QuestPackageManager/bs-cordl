#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderHeadDidMovePastCutMarkEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderHeadDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent.HandleSliderStartDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent::HandleSliderStartDidMovePastCutMark)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent::HandleSliderStartDidMovePastCutMark(::GlobalNamespace::SliderController* sliderController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderController);
}
