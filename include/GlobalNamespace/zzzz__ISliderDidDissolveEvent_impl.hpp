#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidDissolveEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
inline void GlobalNamespace::ISliderDidDissolveEvent::HandleSliderDidDissolve(::GlobalNamespace::SliderController* sliderController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidDissolveEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderController);
}
