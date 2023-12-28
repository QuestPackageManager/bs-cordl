#pragma once
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredDisappearingArrowController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredDisappearingArrowController.get_gameNoteController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MirroredGameNoteController* (::GlobalNamespace::MirroredDisappearingArrowController::*)()>(
    &::GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23861c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredDisappearingArrowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredDisappearingArrowController::*)()>(
    &::GlobalNamespace::MirroredDisappearingArrowController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23861cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MirroredGameNoteController*& GlobalNamespace::MirroredDisappearingArrowController::__get__mirroredGameNoteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MirroredGameNoteController*> const& GlobalNamespace::MirroredDisappearingArrowController::__get__mirroredGameNoteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteController;
}
constexpr void GlobalNamespace::MirroredDisappearingArrowController::__set__mirroredGameNoteController(::GlobalNamespace::MirroredGameNoteController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mirroredGameNoteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MirroredGameNoteController* GlobalNamespace::MirroredDisappearingArrowController::get_gameNoteController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                                             "get_gameNoteController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MirroredGameNoteController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredDisappearingArrowController* GlobalNamespace::MirroredDisappearingArrowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MirroredDisappearingArrowController*>());
}
inline void GlobalNamespace::MirroredDisappearingArrowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredDisappearingArrowController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredDisappearingArrowController::MirroredDisappearingArrowController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
