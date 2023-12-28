#pragma once
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_impl.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderNoteDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BurstSliderGameNoteController* (
    ::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&::GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2384ba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(
    &::GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2384bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BurstSliderGameNoteController*& GlobalNamespace::BurstSliderNoteDisappearingArrowController::__get__burstSliderNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNoteController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> const&
GlobalNamespace::BurstSliderNoteDisappearingArrowController::__get__burstSliderNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNoteController;
}
constexpr void GlobalNamespace::BurstSliderNoteDisappearingArrowController::__set__burstSliderNoteController(::GlobalNamespace::BurstSliderGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderNoteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BurstSliderGameNoteController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), "get_gameNoteController",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BurstSliderGameNoteController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>());
}
inline void GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderNoteDisappearingArrowController::BurstSliderNoteDisappearingArrowController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
