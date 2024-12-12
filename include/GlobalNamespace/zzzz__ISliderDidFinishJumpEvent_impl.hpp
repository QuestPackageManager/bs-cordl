#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidFinishJumpEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
inline void GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidFinishJumpEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderController);
}
