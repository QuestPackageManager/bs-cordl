#pragma once
// IWYU pragma private; include "GlobalNamespace/ISliderDidFinishJumpEvent.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISliderDidFinishJumpEvent.HandleSliderDidFinishJump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISliderDidFinishJumpEvent::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidFinishJumpEvent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidFinishJumpEvent*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISliderDidFinishJumpEvent::HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidFinishJumpEvent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderController);
}
