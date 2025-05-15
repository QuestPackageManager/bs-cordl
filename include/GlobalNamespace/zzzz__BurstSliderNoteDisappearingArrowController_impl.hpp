#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderNoteDisappearingArrowController.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderNoteDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderNoteDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BurstSliderGameNoteController> (
    ::GlobalNamespace::BurstSliderNoteDisappearingArrowController::*)()>(&::GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae8abc;

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
  constexpr static std::size_t addrs = 0x3ae8ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController>& GlobalNamespace::BurstSliderNoteDisappearingArrowController::__cordl_internal_get__burstSliderNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNoteController;
}
constexpr ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> const& GlobalNamespace::BurstSliderNoteDisappearingArrowController::__cordl_internal_get__burstSliderNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderNoteController;
}
constexpr void GlobalNamespace::BurstSliderNoteDisappearingArrowController::__cordl_internal_set__burstSliderNoteController(::UnityW<::GlobalNamespace::BurstSliderGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderNoteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BurstSliderGameNoteController> GlobalNamespace::BurstSliderNoteDisappearingArrowController::get_gameNoteController() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderNoteDisappearingArrowController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* GlobalNamespace::BurstSliderNoteDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BurstSliderNoteDisappearingArrowController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderNoteDisappearingArrowController::BurstSliderNoteDisappearingArrowController() {}
