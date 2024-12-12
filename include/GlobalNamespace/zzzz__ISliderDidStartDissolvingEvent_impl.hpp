#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidStartDissolvingEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
inline void GlobalNamespace::ISliderDidStartDissolvingEvent::HandleSliderDidStartDissolving(::GlobalNamespace::SliderController* sliderController, float_t duration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidStartDissolvingEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderController, duration);
}
